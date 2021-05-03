/*
 * (c) проект "Snegopat.Module", Александр Орефков orefkov@gmail.com
 * Тут обработчики завершения приложения
 */

// Данные строки нужны только для среды разработки и вырезаются препроцессором
#pragma once
#include "../all.h"

Packet exitApp("exitApp", initExitApp, piOnMainWindow);

funcdef void PVV();
funcdef void PCancelExitApp(ExitAppCancel&&);
array<PVV&&> exitAppHandlers;
array<PCancelExitApp&&> beforeExitAppHandlers;

bool initExitApp() {
    IEventService&& es = getEventService();
    es.subscribe(eventExitApp, AStoIUnknown(ExitAppNotifier(), IID_IEventRecipient));
    es.subscribe(eventBeforeExitApp, AStoIUnknown(BeforeExitAppNotifier(), IID_IEventRecipient));
    return true;
}

class ExitAppNotifier {
    void onEvent(const Guid&in eventID, long val, IUnknown& obj) {
        for (uint i = 0, im = exitAppHandlers.length; i < im; i++)
            exitAppHandlers[i]();
        // 1С висит в процессах после выхода - временный хак
        setTimer(5000, function(int_ptr timerId) {
            TerminateProcess(GetCurrentProcess(), 0);
        });
    }
};

class BeforeExitAppNotifier {
    void onEvent(const Guid&in eventID, long val, IUnknown& obj) {
        ExitAppCancel cancel;
        for (uint i = 0, im = beforeExitAppHandlers.length; i < im; i++)
            beforeExitAppHandlers[i](cancel);
        if (cancel.val) {
            IAppExitCancel&& iCancel = obj;
            if (iCancel !is null)
                iCancel.cancelExit(false);
        }
    }
};

class ExitAppCancel {
    bool val = false;
};
