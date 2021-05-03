/*
* API файл для модуля "snegopat", создан 04.05.2021 01:59
* Препроцессор:
* console = 1
* ver = 8.3.18.0
* x64 = 0
* x86 = 1
*/

// Enums
enum InternalObjectsSizes {
	NoCaseSet_size = 40,
	NoCaseSetIterator_size = 8,
	UintMap_size = 40,
	UintMapIterator_size = 12,
	NoCaseMap_size = 48,
	NoCaseMapIterator_size = 12,
	utf8string_size = 4,
	StringComparator_size = 36,
	string_size = 4,
	Guid_size = 16,
	SourcesThunkFixup_size = 4,
	CppCatch_size = 12,
	TrapSwap_size = 20,
	TrapVirtualStdCall_size = 16,
	ScriptError_size = 28,
	Variant_size = 16,
	SmartBoxWindow_size = 144,
	ToolTipWindow_size = 36,
	SmartBoxItemData_size = 16,
	lex_provider_size = 12,
	lexem_size = 16,
};
enum StringCompareMethod {
	cmBegin = 0,
	cmBeginWithOtherLangs = 1,
	cmContain = 2,
};
enum VarEnums {
	VT_EMPTY = 0,
	VT_NULL = 1,
	VT_I2 = 2,
	VT_I4 = 3,
	VT_R4 = 4,
	VT_R8 = 5,
	VT_CY = 6,
	VT_DATE = 7,
	VT_BSTR = 8,
	VT_DISPATCH = 9,
	VT_ERROR = 10,
	VT_BOOL = 11,
	VT_VARIANT = 12,
	VT_UNKNOWN = 13,
	VT_DECIMAL = 14,
	VT_I1 = 16,
	VT_UI1 = 17,
	VT_UI2 = 18,
	VT_UI4 = 19,
	VT_I8 = 20,
	VT_UI8 = 21,
	VT_INT = 22,
	VT_UINT = 23,
	VT_VOID = 24,
	VT_HRESULT = 25,
	VT_PTR = 26,
	VT_SAFEARRAY = 27,
	VT_CARRAY = 28,
	VT_USERDEFINED = 29,
	VT_LPSTR = 30,
	VT_LPWSTR = 31,
	VT_RECORD = 36,
	VT_INT_PTR = 37,
	VT_UINT_PTR = 38,
	VT_FILETIME = 64,
	VT_BLOB = 65,
	VT_STREAM = 66,
	VT_STORAGE = 67,
	VT_STREAMED_OBJECT = 68,
	VT_STORED_OBJECT = 69,
	VT_BLOB_OBJECT = 70,
	VT_CF = 71,
	VT_CLSID = 72,
	VT_VERSIONED_STREAM = 73,
	VT_BSTR_BLOB = 4095,
	VT_VECTOR = 4096,
	VT_ARRAY = 8192,
	VT_BYREF = 16384,
	VT_RESERVED = 32768,
	VT_ILLEGAL = 65535,
	VT_ILLEGALMASKED = 4095,
	VT_TYPEMASK = 4095,
	VARIANT_TRUE = -1,
	VARIANT_FALSE = 0,
};
enum CallTypes {
	asCALL_CDECL = 0,
	asCALL_STDCALL = 1,
	asCALL_THISCALL = 3,
};
enum TrapState {
	trapNotActive = 0,
	trapDisabled = 1,
	trapEnabled = 2,
};
enum snegopat__someConstValues {
	sizeof_ptr = 4,
	TYPEATTR_size = 76,
	TYPEATTR_guid_offset = 0,
	TYPEATTR_lcid_offset = 16,
	TYPEATTR_dwReserved_offset = 20,
	TYPEATTR_memidConstructor_offset = 24,
	TYPEATTR_memidDestructor_offset = 28,
	TYPEATTR_lpstrSchema_offset = 32,
	TYPEATTR_cbSizeInstance_offset = 36,
	TYPEATTR_typekind_offset = 40,
	TYPEATTR_cFuncs_offset = 44,
	TYPEATTR_cVars_offset = 46,
	TYPEATTR_cImplTypes_offset = 48,
	TYPEATTR_cbSizeVft_offset = 50,
	TYPEATTR_cbAlignment_offset = 52,
	TYPEATTR_wTypeFlags_offset = 54,
	TYPEATTR_wMajorVerNum_offset = 56,
	TYPEATTR_wMinorVerNum_offset = 58,
	TYPEATTR_tdescAlias_offset = 60,
	TYPEATTR_idldescType_offset = 68,
	FUNCDESC_size = 64,
	FUNCDESC_memid_offset = 0,
	FUNCDESC_lprgscode_offset = 4,
	FUNCDESC_lprgelemdescParam_offset = 8,
	FUNCDESC_funckind_offset = 12,
	FUNCDESC_invkind_offset = 16,
	FUNCDESC_callconv_offset = 20,
	FUNCDESC_cParams_offset = 24,
	FUNCDESC_cParamsOpt_offset = 26,
	FUNCDESC_oVft_offset = 28,
	FUNCDESC_cScodes_offset = 30,
	SqliteTransactionGuard_size = 8,
	SqliteTransactionGuard_db_offset = 0,
	SqliteTransactionGuard_success_offset = 4,
	LOGFONT_size = 92,
	LOGFONT_lfHeight_offset = 0,
	LOGFONT_lfWidth_offset = 4,
	LOGFONT_lfEscapement_offset = 8,
	LOGFONT_lfOrientation_offset = 12,
	LOGFONT_lfWeight_offset = 16,
	LOGFONT_lfItalic_offset = 20,
	LOGFONT_lfUnderline_offset = 21,
	LOGFONT_lfStrikeOut_offset = 22,
	LOGFONT_lfCharSet_offset = 23,
	LOGFONT_lfOutPrecision_offset = 24,
	LOGFONT_lfClipPrecision_offset = 25,
	LOGFONT_lfQuality_offset = 26,
	LOGFONT_lfPitchAndFamily_offset = 27,
	LOGFONT_lfFaceNameStart_offset = 28,
	LOGFONT_lfFaceNameEnd_offset = 90,
	MONITORINFO_size = 40,
	MONITORINFO_cbSize_offset = 0,
	MONITORINFO_rcMonitor_offset = 4,
	MONITORINFO_rcWork_offset = 20,
	MONITORINFO_dwFlags_offset = 36,
	MSG_size = 28,
	MSG_hwnd_offset = 0,
	MSG_message_offset = 4,
	MSG_wParam_offset = 8,
	MSG_lParam_offset = 12,
	MSG_time_offset = 16,
	MSG_pt_offset = 20,
	Rect_size = 16,
	Rect_left_offset = 0,
	Rect_top_offset = 4,
	Rect_right_offset = 8,
	Rect_bottom_offset = 12,
	Point_size = 8,
	Point_x_offset = 0,
	Point_y_offset = 4,
	Size_size = 8,
	Size_cx_offset = 0,
	Size_cy_offset = 4,
	MINMAXINFO_size = 40,
	MINMAXINFO_ptReserved_offset = 0,
	MINMAXINFO_ptMaxSize_offset = 8,
	MINMAXINFO_ptMaxPosition_offset = 16,
	MINMAXINFO_ptMinTrackSize_offset = 24,
	MINMAXINFO_ptMaxTrackSize_offset = 32,
	FILETIME_size = 8,
	FILETIME_dwLowDateTime_offset = 0,
	FILETIME_dwHighDateTime_offset = 4,
	WIN32_FIND_DATA_size = 648,
	WIN32_FIND_DATA_dwFileAttributes_offset = 0,
	WIN32_FIND_DATA_ftCreationTime_offset = 4,
	WIN32_FIND_DATA_ftLastAccessTime_offset = 12,
	WIN32_FIND_DATA_ftLastWriteTime_offset = 20,
	WIN32_FIND_DATA_nFileSizeHigh_offset = 28,
	WIN32_FIND_DATA_nFileSizeLow_offset = 32,
	WIN32_FIND_DATA_dwReserved0_offset = 36,
	WIN32_FIND_DATA_dwReserved1_offset = 40,
	WIN32_FIND_DATA_cFileName_offset = 44,
	mbp_size = 24,
	mbp_pNode_offset = 0,
	mbp_size_offset = 4,
	mbp_fakeNode_offset = 8,
	mbp_prev_offset = 12,
	mbp_next_offset = 16,
	mbp_i1_offset = 20,
	mbp_i2_offset = 21,
	SelectFileName_size = 156,
	SelectFileName_mode_offset = 0,
	SelectFileName_flags_offset = 4,
	SelectFileName_filter_offset = 8,
	SelectFileName_filterString_offset = 20,
	SelectFileName_filterIndex_offset = 44,
	SelectFileName_defExt_offset = 48,
	SelectFileName_initialFileName_offset = 72,
	SelectFileName_selectedFiles_offset = 96,
	SelectFileName_directory_offset = 108,
	SelectFileName_title_offset = 132,
	CommandID_size = 20,
	CommandID_group_offset = 0,
	CommandID_num_offset = 16,
	Command_size = 28,
	Command_id_offset = 0,
	Command_param_offset = 20,
	Command_object_offset = 24,
	ICmdStateImpl_size = 44,
	ICmdStateImpl_id_offset = 16,
	ICmdStateImpl_cmdState_offset = 36,
	ICmdStateImpl_lstState_offset = 40,
	KeyAccel_size = 32,
	KeyAccel_text_offset = 0,
	KeyAccel_vkCode_offset = 24,
	KeyAccel_flags_offset = 28,
	CompositeID_size = 24,
	CompositeID_id_offset = 0,
	CompositeID_uuid_offset = 4,
	CompositeID_emptyUuid_offset = 20,
	LineInfo_size = 16,
	LineInfo_hasChild_offset = 0,
	LineInfo_level_offset = 4,
	LineInfo_expandable_offset = 8,
	LineInfo_bookmark_offset = 12,
	ImageInfo_size = 16,
	ImageInfo_image_offset = 0,
	ImageInfo_posInPicture_offset = 4,
	ImageInfo_paintStyle_offset = 12,
	CellFormat_size = 584,
	CellFormat_text_offset = 0,
	CellFormat_state_offset = 24,
	CellFormat_image_offset = 28,
	CellFormat_extImage_offset = 44,
	CellFormat_clrBkg_offset = 60,
	CellFormat_clrText_offset = 88,
	CellFormat_font_offset = 116,
	CellFormat_readOnly_offset = 276,
	CellFormat_horAlign_offset = 280,
	CellFormat_verAlign_offset = 284,
	CellFormat_tooltip_offset = 288,
	CellFormat_showAddCheck_offset = 312,
	CellFormat_visible_offset = 313,
	CellFormat_height_offset = 314,
	CellFormat_autoHeight_offset = 316,
	CellFormat_hyperLink_offset = 317,
	CellFormat_v8Style_offset = 320,
	CellFormat_validFields_offset = 324,
	DocSink_size = 48,
	DocSink_vtab_offset = 0,
	DocSink_refCount_offset = 4,
	DocSink_i1_offset = 8,
	DocSink_i2_offset = 12,
	DocSink_editHelper_offset = 16,
	DocSink_propId_offset = 20,
	StorageFileInfo_size = 56,
	StorageFileInfo_name_offset = 32,
	FileException_size = 88,
	FileException_id_offset = 0,
	FileException_descr_offset = 16,
	FileException_ptr_offset = 40,
	FileException_code_offset = 44,
	FileException_url_offset = 48,
	Font_size = 160,
	Font_kind_offset = 0,
	Font_lf_offset = 4,
	Font_autoCharSet_offset = 96,
	Font_style_offset = 100,
	Font_validMask_offset = 124,
	MDProperty_size = 56,
	MDProperty_refs_offset = 0,
	MDProperty_id_offset = 4,
	MDProperty_nameEng_offset = 20,
	MDProperty_nameRus_offset = 24,
	MDProperty_i1_offset = 28,
	MDProperty_i2_offset = 32,
	MDProperty_resMod1_offset = 36,
	MDProperty_resID_offset = 40,
	MDProperty_resMod2_offset = 44,
	MDProperty_resCatID_offset = 48,
	MDProperty_pIType_offset = 52,
	FieldInfo_size = 80,
	FieldInfo_name1_offset = 0,
	FieldInfo_name2_offset = 24,
	FieldInfo_description_offset = 48,
	FieldInfo_typeDomain_offset = 72,
	FieldInfo_readOnly_offset = 76,
	MDEventInfo_size = 48,
	MDEventInfo_request_offset = 0,
	MDEventInfo_result_offset = 1,
	MDEventInfo_kind_offset = 4,
	MDEventInfo_object_offset = 8,
	MDEventInfo_parent_offset = 12,
	MDEventInfo_id_offset = 16,
	MDEventInfo_changedPropId_offset = 32,
	TypeInfo_size = 88,
	TypeInfo_typeId_offset = 0,
	TypeInfo_name_offset = 16,
	TypeInfo_priority_offset = 40,
	TypeInfo_order_offset = 44,
	TypeInfo_image_offset = 48,
	TypeInfo_i1_offset = 52,
	TypeInfo_compaundType_offset = 56,
	TypeInfo_unMergeable_offset = 57,
	TypeInfo_str_offset = 60,
	MDTreeItemInfo_size = 88,
	MDTreeItemInfo_id_offset = 0,
	MDTreeItemInfo_text_offset = 16,
	MDTreeItemInfo_editHelper_offset = 40,
	MDTreeItemInfo_image_offset = 44,
	V8Picture_size = 100,
	V8Picture_kind_offset = 0,
	V8Picture_cid_offset = 4,
	V8Picture_url_offset = 28,
	V8Picture_picture_offset = 68,
	V8Picture_pxForTransparent_offset = 72,
	V8Picture_withTransparent_offset = 80,
	V8Picture_isGlyph_offset = 81,
	V8Picture_ptGlyph_offset = 84,
	V8Picture_szGlyph_offset = 92,
	Glyph_size = 36,
	Glyph_p1_offset = 0,
	Glyph_p2_offset = 4,
	Glyph_p3_offset = 8,
	Glyph_p4_offset = 12,
	Glyph_block_offset = 16,
	Glyph_size_offset = 20,
	Glyph_point_offset = 28,
	Exception_size = 44,
	Exception_id_offset = 0,
	Exception_descr_offset = 16,
	Exception_ptr_offset = 40,
	Sci_CharacterRange_size = 8,
	Sci_CharacterRange_cpMin_offset = 0,
	Sci_CharacterRange_cpMax_offset = 4,
	Sci_TextRange_size = 12,
	Sci_TextRange_chrg_offset = 0,
	Sci_TextRange_lpstrText_offset = 8,
	Sci_TextToFind_size = 20,
	Sci_TextToFind_chrg_offset = 0,
	Sci_TextToFind_lpstrText_offset = 8,
	Sci_TextToFind_chrgText_offset = 12,
	Sci_Rectangle_size = 16,
	Sci_Rectangle_left_offset = 0,
	Sci_Rectangle_top_offset = 4,
	Sci_Rectangle_right_offset = 8,
	Sci_Rectangle_bottom_offset = 12,
	Sci_NotifyHeader_size = 12,
	Sci_NotifyHeader_hwndFrom_offset = 0,
	Sci_NotifyHeader_idFrom_offset = 4,
	Sci_NotifyHeader_code_offset = 8,
	SCNotification_size = 96,
	SCNotification_nmhdr_offset = 0,
	SCNotification_position_offset = 12,
	SCNotification_ch_offset = 16,
	SCNotification_modifiers_offset = 20,
	SCNotification_modificationType_offset = 24,
	SCNotification_text_offset = 28,
	SCNotification_length_offset = 32,
	SCNotification_linesAdded_offset = 36,
	SCNotification_message_offset = 40,
	SCNotification_wParam_offset = 44,
	SCNotification_lParam_offset = 48,
	SCNotification_line_offset = 52,
	SCNotification_foldLevelNow_offset = 56,
	SCNotification_foldLevelPrev_offset = 60,
	SCNotification_margin_offset = 64,
	SCNotification_listType_offset = 68,
	SCNotification_x_offset = 72,
	SCNotification_y_offset = 76,
	SCNotification_token_offset = 80,
	SCNotification_annotationLinesAdded_offset = 84,
	SCNotification_updated_offset = 88,
	SCNotification_listCompletionMethod_offset = 92,
	Vector_size = 12,
	Vector_start_offset = 0,
	Vector_end_offset = 4,
	Vector_allocated_offset = 8,
	v8strData_size = 8,
	v8strData_refCount_offset = 0,
	v8strData_text_offset = 4,
	v8string_size = 24,
	v8string_len_offset = 0,
	v8string_data_offset = 4,
	v8string_pEnd_offset = 8,
	v8string_i1_offset = 12,
	v8string_i2_offset = 16,
	Color_size = 28,
	Color_kind_offset = 0,
	Color_value_offset = 4,
	SyntaxItemInfo_size = 56,
	SyntaxItemInfo_start_offset = 0,
	SyntaxItemInfo_len_offset = 4,
	SyntaxItemInfo_color_offset = 8,
	SyntaxItemInfo_isBlock_offset = 36,
	SyntaxItemInfo_blockKind_offset = 40,
	SyntaxItemInfo_blockMode_offset = 44,
	SyntaxItemInfo_lexemCategory_offset = 48,
	SyntaxItemInfo_lexemType_offset = 52,
	SyntaxItemInfos_size = 16,
	SyntaxItemInfos_refCount_offset = 0,
	SyntaxItemInfos_infos_offset = 4,
	BackColorsItem_size = 12,
	BackColorsItem_start_offset = 0,
	BackColorsItem_len_offset = 4,
	BackColorsItem_color_offset = 8,
	TextPosition_size = 12,
	TextPosition_vtable_offset = 0,
	TextPosition_line_offset = 4,
	TextPosition_col_offset = 8,
	LocalWString_size = 4,
	TypeDomainPattern_size = 4,
	TypeDomainPattern_ptr_offset = 0,
	list_node_size = 16,
	list_node_p1_offset = 0,
	list_node_p2_offset = 4,
	list_node_p3_offset = 8,
	list_node_f_offset = 12,
	TypeContextInfoItem_size = 272,
	TypeContextInfoItem_name_offset = 0,
	TypeContextInfoItem_isMethod_offset = 24,
	TypeContextInfoItem_haveRetVal_offset = 25,
	TypeContextInfoItem_params_offset = 28,
	TypeContextInfoItem_from_offset = 32,
	TypeContextInfoItem_typeDomain_offset = 36,
	TypeContextInfoItem_lst_0_offset = 40,
	TypeContextInfoItem_lst_4_offset = 44,
	TypeContextInfoItem_flag1_offset = 48,
	TypeContextInfoItem_ip1_offset = 52,
	TypeContextInfoItem_textPos_vt_offset = 56,
	TypeContextInfoItem_flag0_1_offset = 60,
	TypeContextInfoItem_flag0_2_offset = 64,
	TypeContextInfoItem_objectId_offset = 68,
	TypeContextInfoItem_mdPropId_offset = 84,
	TypeContextInfoItem_isTypeSource_offset = 100,
	TypeContextInfoItem_providedTypeDomain_offset = 104,
	TypeContextInfoItem_str1_offset = 108,
	TypeContextInfoItem_str2_offset = 132,
	TypeContextInfoItem_byte_0_offset = 156,
	TypeContextInfoItem_someVector_offset = 160,
	TypeNameInfo_size = 40,
	TypeNameInfo_name_offset = 0,
	TypeNameInfo_uuid_offset = 24,
	ContextValueInfo_size = 76,
	ContextValueInfo_nameEng_offset = 0,
	ContextValueInfo_nameRus_offset = 24,
	ContextValueInfo_typeDomainPattern_offset = 48,
	ContextValueInfo_isMutable_offset = 52,
	ContextValueInfo_zero1_offset = 56,
	ContextValueInfo_zero2_offset = 60,
	ContextValueInfo_pZero1_offset = 64,
	ContextValueInfo_pZero2_offset = 68,
	ContextValueInfo_zero3_offset = 72,
	URL_size = 40,
	URL_url_offset = 0,
	URL_vec_offset = 24,
	URL_b1_offset = 36,
	URL_b2_offset = 37,
	Date_size = 8,
	Date_ticks_offset = 0,
	Numeric_size = 36,
	Numeric_allocked_offset = 0,
	Numeric_length_offset = 4,
	Numeric_prec_offset = 8,
	Numeric__sign_offset = 12,
	Numeric_data_offset = 16,
	Numeric_inplace1_offset = 20,
	Numeric_inplace2_offset = 24,
	Numeric_inplace3_offset = 28,
	Numeric_inplace4_offset = 32,
	Value_size = 8,
	Value_vtable_offset = 0,
	Value_pValue_offset = 4,
	Type_size = 4,
	Type_pType_offset = 0,
	VTColumnInfo_size = 80,
	VTColumnInfo_name1_offset = 0,
	VTColumnInfo_name2_offset = 24,
	VTColumnInfo_type_offset = 48,
	VTColumnInfo_title_offset = 52,
	VTColumnInfo_width_offset = 76,
	StructKeys_size = 8,
	StructKeys_key1_offset = 0,
	StructKeys_key2_offset = 4,
	IMDIClient_size = 36,
	IMDIClient_childsIds_offset = 24,
	ViewContextListNode_size = 12,
	ViewContextListNode_next_offset = 0,
	ViewContextListNode_prev_offset = 4,
	ViewContextListNode_view_offset = 8,
	ViewContextList_size = 12,
	ViewContextList_head_offset = 0,
	ViewContextList_end_offset = 4,
	ViewPosition_size = 224,
	ViewPosition_state_offset = 0,
	ViewPosition_unk1_offset = 4,
	ViewPosition_unk2_offset = 8,
	ViewPosition_area_offset = 12,
	ViewPosition_dockLine_offset = 16,
	ViewPosition_dockOffset_offset = 20,
	ViewPosition_dockSize_offset = 24,
	ViewPosition_canSplit_offset = 32,
	ViewPosition_floatRect_offset = 36,
	ViewPosition_MDI_Rect_offset = 52,
	ViewPosition_MDI_maxed_offset = 68,
	ViewPosition_autoHideSize_offset = 72,
	ViewPosition_stateAbility_offset = 80,
	ViewPosition_areaAbility_offset = 84,
	ViewPosition_splitAbility_offset = 88,
	ViewPosition_MDI_ViewData_offset = 92,
	ViewPosition_floatViewData_offset = 116,
	ViewPosition_dockViewData_offset = 140,
	ViewPosition_autoHideViewData_offset = 164,
	ViewPosition_center_offset = 188,
	ViewPosition_unk3_offset = 189,
	ViewPosition_unk4_offset = 192,
	ViewPosition_unk5_offset = 208,
	ViewPosition_unk6_offset = 212,
	ViewPosition_unk7_offset = 220,
	ViewContext_size = 520,
	ViewContext_id_offset = 0,
	ViewContext_vpCurrent_offset = 48,
	ViewContext_vpOriginal_offset = 284,
	ViewContext_sizeOriginal_offset = 508,
	ViewContext_parent_offset = 516,
	tagRECT_size = 16,
	tagRECT_left_offset = 0,
	tagRECT_top_offset = 4,
	tagRECT_right_offset = 8,
	tagRECT_bottom_offset = 12,
	IBkEndUI_doModal1 = 21,
	IBkEndUI_messageBox = 22,
	IBkEndUI_doModal2 = 24,
	IBkEndUI_doMsgLine = 51,
	IBkEndUI_GetFileName = 74,
	ICommandTarget_onExecute = 3,
	ICommandReceiver_transmitCommand = 3,
	IExternalCalculatorOwner_setExternalCalculator = 3,
	IDocument_createView = 5,
	IFileSystem_openURL = 6,
	IMDEditService_openConfig = 10,
	IMDClass_childClassIDAt = 19,
	IProfileService_open = 42,
	ITextEditor_setSelectionNull = 13,
	ITextEditor_setCaretPosition = 15,
	ITextEditor_scrollToCaretPos = 16,
	ITextEditor_setSelection = 21,
	ITextManager_Operations_setExtenderCLSID = 4,
	ISourceLexer_splitToLexems = 3,
	ITEIntelliSence_getContextListPos = 10,
	ITextExtBackColors_hasCustomBackground = 3,
	ITextExtBackColors_getColorInfo = 4,
	ITextExtColors_getColors = 5,
	IAssistList_getDataSource = 4,
	IWindowView_createWindow = 10,
	IFramedView_localFrame = 6,
	IFramedView_onActivate = 9,
	IFramedView_onInitialUpdate = 11,
	IFramedView_onFinalOpen = 12,
	IFramedView_mdiType = 18,
	IDocumentView_localFrame = 6,
	IDocumentView_onActivate = 9,
	IDocumentView_onInitialUpdate = 11,
	IDocumentView_onFinalOpen = 12,
	IDocumentView_mdiType = 18,
	ITopLevelFrame_setTitle = 26,
	ITopLevelFrame_setAdditionalTitle = 27,
};
enum TYPEKIND {
	TKIND_ENUM = 0,
	TKIND_RECORD = 1,
	TKIND_MODULE = 2,
	TKIND_INTERFACE = 3,
	TKIND_DISPATCH = 4,
};
enum FUNCKIND {
	FUNC_VIRTUAL = 0,
	FUNC_PUREVIRTUAL = 1,
	FUNC_NONVIRTUAL = 2,
	FUNC_STATIC = 3,
	FUNC_DISPATCH = 4,
};
enum INVOKEKIND {
	INVOKE_FUNC = 1,
	INVOKE_PROPERTYGET = 2,
	INVOKE_PROPERTYPUT = 4,
};
enum s3const {
	SQLITE_OK = 0,
	SQLITE_ERROR = 1,
	SQLITE_INTERNAL = 2,
	SQLITE_PERM = 3,
	SQLITE_ABORT = 4,
	SQLITE_BUSY = 5,
	SQLITE_LOCKED = 6,
	SQLITE_NOMEM = 7,
	SQLITE_READONLY = 8,
	SQLITE_INTERRUPT = 9,
	SQLITE_IOERR = 10,
	SQLITE_CORRUPT = 11,
	SQLITE_NOTFOUND = 12,
	SQLITE_FULL = 13,
	SQLITE_CANTOPEN = 14,
	SQLITE_PROTOCOL = 15,
	SQLITE_EMPTY = 16,
	SQLITE_SCHEMA = 17,
	SQLITE_TOOBIG = 18,
	SQLITE_CONSTRAINT = 19,
	SQLITE_MISMATCH = 20,
	SQLITE_MISUSE = 21,
	SQLITE_NOLFS = 22,
	SQLITE_AUTH = 23,
	SQLITE_FORMAT = 24,
	SQLITE_RANGE = 25,
	SQLITE_NOTADB = 26,
	SQLITE_NOTICE = 27,
	SQLITE_WARNING = 28,
	SQLITE_ROW = 100,
	SQLITE_DONE = 101,
	SQLITE_INTEGER = 1,
	SQLITE_FLOAT = 2,
	SQLITE_TEXT = 3,
	SQLITE_BLOB = 4,
	SQLITE_NULL = 5,
	SQLITE_STATIC = 0,
	SQLITE_TRANSIENT = -1,
	SQLITE_OPEN_READONLY = 1,
	SQLITE_OPEN_READWRITE = 2,
	SQLITE_OPEN_CREATE = 4,
	SQLITE_OPEN_DELETEONCLOSE = 8,
	SQLITE_OPEN_EXCLUSIVE = 16,
	SQLITE_OPEN_AUTOPROXY = 32,
	SQLITE_OPEN_URI = 64,
	SQLITE_OPEN_MEMORY = 128,
	SQLITE_OPEN_MAIN_DB = 256,
	SQLITE_OPEN_TEMP_DB = 512,
	SQLITE_OPEN_TRANSIENT_DB = 1024,
	SQLITE_OPEN_MAIN_JOURNAL = 2048,
	SQLITE_OPEN_TEMP_JOURNAL = 4096,
	SQLITE_OPEN_SUBJOURNAL = 8192,
	SQLITE_OPEN_MASTER_JOURNAL = 16384,
	SQLITE_OPEN_NOMUTEX = 32768,
	SQLITE_OPEN_FULLMUTEX = 65536,
	SQLITE_OPEN_SHAREDCACHE = 131072,
	SQLITE_OPEN_PRIVATECACHE = 262144,
	SQLITE_OPEN_WAL = 524288,
};
enum WndMessages {
	WM_DESTROY = 2,
	WM_MOVE = 3,
	WM_SIZE = 5,
	WM_SETFOCUS = 7,
	WM_KILLFOCUS = 8,
	WM_SETTEXT = 12,
	WM_PAINT = 15,
	WM_CLOSE = 16,
	WM_GETMINMAXINFO = 36,
	WM_SETFONT = 48,
	WM_NOTIFY = 78,
	WM_NCCALCSIZE = 131,
	WM_KEYDOWN = 256,
	WM_KEYUP = 257,
	WM_CHAR = 258,
	WM_DEADCHAR = 259,
	WM_SYSKEYDOWN = 260,
	WM_SYSKEYUP = 261,
	WM_SYSDEADCHAR = 263,
	WM_UNICHAR = 265,
	WM_INITDIALOG = 272,
	WM_COMMAND = 273,
	WM_LBUTTONDOWN = 513,
	WM_LBUTTONUP = 514,
	WM_RBUTTONDOWN = 516,
	WM_RBUTTONUP = 517,
	WM_SIZING = 532,
	EN_CHANGE = 768,
	WM_HOTKEY = 786,
	WM_CONTEXTMENU = 123,
};
enum WinConstants {
	DEFAULT_GUI_FONT = 17,
};
enum VirtualKeyCodes {
	VK_LBUTTON = 1,
	VK_RBUTTON = 2,
	VK_CANCEL = 3,
	VK_MBUTTON = 4,
	VK_XBUTTON1 = 5,
	VK_XBUTTON2 = 6,
	VK_BACK = 8,
	VK_TAB = 9,
	VK_CLEAR = 12,
	VK_RETURN = 13,
	VK_SHIFT = 16,
	VK_CONTROL = 17,
	VK_MENU = 18,
	VK_PAUSE = 19,
	VK_CAPITAL = 20,
	VK_KANA = 21,
	VK_HANGEUL = 21,
	VK_HANGUL = 21,
	VK_JUNJA = 23,
	VK_FINAL = 24,
	VK_HANJA = 25,
	VK_KANJI = 25,
	VK_ESCAPE = 27,
	VK_CONVERT = 28,
	VK_NONCONVERT = 29,
	VK_ACCEPT = 30,
	VK_MODECHANGE = 31,
	VK_SPACE = 32,
	VK_PRIOR = 33,
	VK_NEXT = 34,
	VK_END = 35,
	VK_HOME = 36,
	VK_LEFT = 37,
	VK_UP = 38,
	VK_RIGHT = 39,
	VK_DOWN = 40,
	VK_SELECT = 41,
	VK_PRINT = 42,
	VK_EXECUTE = 43,
	VK_SNAPSHOT = 44,
	VK_INSERT = 45,
	VK_DELETE = 46,
	VK_HELP = 47,
	VK_LWIN = 91,
	VK_RWIN = 92,
	VK_APPS = 93,
	VK_SLEEP = 95,
	VK_NUMPAD0 = 96,
	VK_NUMPAD1 = 97,
	VK_NUMPAD2 = 98,
	VK_NUMPAD3 = 99,
	VK_NUMPAD4 = 100,
	VK_NUMPAD5 = 101,
	VK_NUMPAD6 = 102,
	VK_NUMPAD7 = 103,
	VK_NUMPAD8 = 104,
	VK_NUMPAD9 = 105,
	VK_MULTIPLY = 106,
	VK_ADD = 107,
	VK_SEPARATOR = 108,
	VK_SUBTRACT = 109,
	VK_DECIMAL = 110,
	VK_DIVIDE = 111,
	VK_F1 = 112,
	VK_F2 = 113,
	VK_F3 = 114,
	VK_F4 = 115,
	VK_F5 = 116,
	VK_F6 = 117,
	VK_F7 = 118,
	VK_F8 = 119,
	VK_F9 = 120,
	VK_F10 = 121,
	VK_F11 = 122,
	VK_F12 = 123,
	VK_F13 = 124,
	VK_F14 = 125,
	VK_F15 = 126,
	VK_F16 = 127,
	VK_F17 = 128,
	VK_F18 = 129,
	VK_F19 = 130,
	VK_F20 = 131,
	VK_F21 = 132,
	VK_F22 = 133,
	VK_F23 = 134,
	VK_F24 = 135,
	VK_NUMLOCK = 144,
	VK_SCROLL = 145,
	VK_OEM_NEC_EQUAL = 146,
	VK_OEM_FJ_JISHO = 146,
	VK_OEM_FJ_MASSHOU = 147,
	VK_OEM_FJ_TOUROKU = 148,
	VK_OEM_FJ_LOYA = 149,
	VK_OEM_FJ_ROYA = 150,
	VK_LSHIFT = 160,
	VK_RSHIFT = 161,
	VK_LCONTROL = 162,
	VK_RCONTROL = 163,
	VK_LMENU = 164,
	VK_RMENU = 165,
	VK_BROWSER_BACK = 166,
	VK_BROWSER_FORWARD = 167,
	VK_BROWSER_REFRESH = 168,
	VK_BROWSER_STOP = 169,
	VK_BROWSER_SEARCH = 170,
	VK_BROWSER_FAVORITES = 171,
	VK_BROWSER_HOME = 172,
	VK_VOLUME_MUTE = 173,
	VK_VOLUME_DOWN = 174,
	VK_VOLUME_UP = 175,
	VK_MEDIA_NEXT_TRACK = 176,
	VK_MEDIA_PREV_TRACK = 177,
	VK_MEDIA_STOP = 178,
	VK_MEDIA_PLAY_PAUSE = 179,
	VK_LAUNCH_MAIL = 180,
	VK_LAUNCH_MEDIA_SELECT = 181,
	VK_LAUNCH_APP1 = 182,
	VK_LAUNCH_APP2 = 183,
	VK_OEM_1 = 186,
	VK_OEM_PLUS = 187,
	VK_OEM_COMMA = 188,
	VK_OEM_MINUS = 189,
	VK_OEM_PERIOD = 190,
	VK_OEM_2 = 191,
	VK_OEM_3 = 192,
	VK_OEM_4 = 219,
	VK_OEM_5 = 220,
	VK_OEM_6 = 221,
	VK_OEM_7 = 222,
	VK_OEM_8 = 223,
	VK_PROCESSKEY = 229,
	VK_ICO_CLEAR = 230,
	VK_PACKET = 231,
	VK_OEM_RESET = 233,
	VK_OEM_JUMP = 234,
	VK_OEM_PA1 = 235,
	VK_OEM_PA2 = 236,
	VK_OEM_PA3 = 237,
	VK_OEM_WSCTRL = 238,
	VK_OEM_CUSEL = 239,
	VK_OEM_ATTN = 240,
	VK_OEM_FINISH = 241,
	VK_OEM_COPY = 242,
	VK_OEM_AUTO = 243,
	VK_OEM_ENLW = 244,
	VK_OEM_BACKTAB = 245,
	VK_ATTN = 246,
	VK_CRSEL = 247,
	VK_EXSEL = 248,
	VK_EREOF = 249,
	VK_PLAY = 250,
	VK_ZOOM = 251,
	VK_NONAME = 252,
	VK_PA1 = 253,
	VK_OEM_CLEAR = 254,
};
enum FileAttributes {
	FILE_ATTRIBUTE_DIRECTORY = 16,
};
enum LexemTypes {
	endOfText = 0,
	lexUnknown = 0,
	lexRemark = 1,
	lexQuote = 2,
	lexQuoteOpen = 3,
	lexDate = 4,
	lexDateOpen = 5,
	lexNumber = 6,
	lexPreproc = 7,
	lexDirective = 8,
	lexLabel = 9,
	lexLPar = 10,
	lexRPar = 11,
	lexLBrt = 12,
	lexRBrt = 13,
	lexEqual = 14,
	lexComma = 15,
	lexSemicolon = 16,
	lexPlus = 17,
	lexMinus = 18,
	lexMult = 19,
	lexDivide = 20,
	lexMod = 21,
	lexQuestion = 22,
	lexPeriod = 23,
	lexLess = 24,
	lexLessEq = 25,
	lexGrat = 26,
	lexGratEq = 27,
	lexNotEq = 28,
	lexName = 29,
	kwIf = 30,
	kwThen = 31,
	kwElsIf = 32,
	kwEndIf = 33,
	kwElse = 34,
	kwFor = 35,
	kwEach = 36,
	kwIn = 37,
	kwTo = 38,
	kwWhile = 39,
	kwDo = 40,
	kwEndDo = 41,
	kwProcedure = 42,
	kwFunction = 43,
	kwEndProcedure = 44,
	kwEndFunction = 45,
	kwVar = 46,
	kwGoto = 47,
	kwReturn = 48,
	kwContinue = 49,
	kwBreak = 50,
	kwAnd = 51,
	kwOr = 52,
	kwNot = 53,
	kwTry = 54,
	kwExcept = 55,
	kwRaise = 56,
	kwEndTry = 57,
	kwNew = 58,
	kwExecute = 59,
	kwTrue = 60,
	kwFalse = 61,
	kwAddHandler = 62,
	kwRemoveHandler = 63,
	kwExport = 64,
	kwNull = 65,
	kwUndefined = 66,
	kwVal = 67,
	onlyMeths = 68,
	onlyMethsAndStatements = 69,
	onlyVarsAndMethods = 70,
	currentLexem = 71,
	kwCount = 38,
};
enum ClassOfSymbols {
	symbSpace = 1,
	symbAlpha = 2,
};
enum HotKeysModifier {
	hkCtrl = 65536,
	hkAlt = 131072,
	hkShift = 262144,
};
enum NavigateType {
	navFirst = 0,
	navLast = 1,
	navNext = 2,
	navPrev = 3,
	navNextPage = 4,
	navPrevPage = 5,
};
enum MessageMarker {
	mNone = 0,
	mTriangle = 1,
	mExc1 = 2,
	mExc2 = 3,
	mExc3 = 4,
	mInfo = 5,
};
enum MsgBoxStyles {
	mbOK = 0,
	mbOkCancel = 1,
	mbAbortRetryIgnore = 2,
	mbYesNoCancel = 3,
	mbYesNo = 4,
	mbRetryCancel = 5,
	mbIconError = 16,
	mbIconQuestion = 32,
	mbIconWarning = 48,
	mbIconInformation = 64,
	mbDefButton1 = 0,
	mbDefButton2 = 256,
	mbDefButton3 = 512,
};
enum MsgBoxAnswers {
	mbaOK = 1,
	mbaCancel = 2,
	mbaAbort = 3,
	mbaRetry = 4,
	mbaIgnore = 5,
	mbaYes = 6,
	mbaNo = 7,
};
enum SelectFileMode {
	sfOpen = 0,
	sfSave = 1,
	sfFolder = 2,
};
enum SelectFileFlags {
	sfMultiSelect = 1,
	sfPromptCreate = 2,
	sfFileMustExist = 4,
	sfDisableChangeDir = 8,
	sfPromptOverwrite = 16,
	sfUsePreview = 32,
};
enum FrameCommands {
	cmdFindInTree = 72,
	cmdFrameShowAssist = 600,
	cmdFrameShowParams = 601,
};
enum FrntEndCommands {
	cmdQueryWizard = 63,
};
enum DataSource_SourceType {
	stTable = 0,
	stTree = 1,
};
enum LinkType {
	ltParent = 0,
	ltFirstChild = 1,
	ltLastChild = 2,
	ltPrev = 3,
	ltNext = 4,
	ltSelf = 5,
};
enum RowActivateType {
	eNone = 0,
	eUp = 1,
	eCenter = 2,
	eDown = 3,
	eChangeBookmark = 4,
	eShowTreeLevel = 5,
};
enum CellFormatValidFields {
	cfText = 1,
	cfImage = 2,
	cfAddImage = 4,
	cfCheck = 8,
	cfAddCheck = 16,
	cfBkgColor = 32,
	cfTextColor = 64,
	cfReadOnly = 128,
	cfHorAlign = 256,
	cfTextFont = 512,
	cfTooltipText = 1024,
	cfVisible = 2048,
	cfHeight = 4096,
	cfAutoHeight = 8192,
	cfHyperLink = 16384,
};
enum CheckState {
	csNotChecked = 0,
	csChecked = 1,
	csGrayed = 2,
};
enum HAlign {
	ehaLeft = 0,
	ehaCenter = 1,
	ehaRight = 2,
	ehaJustify = 3,
	ehaAuto = 4,
};
enum VAlign {
	evaTop = 0,
	evaCenter = 1,
	evaBottom = 2,
};
enum IdleHandlerAnswer {
	idleHandlerUnknownFuncAnswer = 0,
};
enum FileOpenModes {
	fomAppend = 1,
	fomTruncate = 2,
	fomIn = 8,
	fomOut = 16,
	fomShareRead = 256,
	fomShareWrite = 512,
};
enum FileSeekMode {
	fsBegin = 1,
	fsCurrent = 2,
	fsEnd = 4,
};
enum StorageCreateFlags {
	scfNone = 0,
	scfCached = 1,
	scfTruncate = 2,
};
enum FontKind {
	fkLogfont = 0,
	fkSystem = 1,
	fkStyle = 2,
	fkAuto = 3,
};
enum MdOffsets {
	MetaDataObjInEventRecipientOffset = 24,
};
enum EventMetaDataKind {
	emdAddChild = 0,
	emdPropChanged = 1,
	emdDeleteChild = 2,
	emdChanged = 3,
	emdSave = 4,
	emdClose = 5,
	emdAfterSave = 6,
};
enum PictOffset {
	pictOffset = 64,
};
enum EStringSize {
	inplaceStringSize = 10,
};
enum ControlMode {
	ctrlDesign = 0,
	ctrlRunning = 1,
};
enum Symbols {
	symbCaret = 166,
};
enum TxtEdtCommand {
	cmdTxtToggleBookmark = 1,
	cmdTxtNextBookmark = 2,
	cmdTxtPrevBookmark = 3,
	cmdTxtClearBookmarks = 4,
	cmdTxtFormatBlock = 6,
	cmdTxtMoveBlockRight = 7,
	cmdTxtMoveBlockLeft = 8,
	cmdTxtInsertPageBreak = 11,
	cmdTxtParams = 12,
	cmdTxtGotoLine = 15,
	cmdProcessTemplate = 61,
};
enum TxtOffsets {
	ModuleTxtExtSettingsMap = 628,
};
enum ColorsKind {
	ckRGB = 0,
	ckIdxWin = 1,
	ckIdxWeb = 2,
	ckIdxStyle = 3,
	ckAuto = 4,
};
enum BlockMarker {
	bmNone = 1,
	bmBegin = 2,
	bmInner = 4,
	bmEnd = 8,
	groupBlockBegin = 16,
	groupBlockEnd = 32,
};
enum GroupConstant {
	groupBlockKind = 4,
};
enum V8LexCategory {
	vlKeyword = 0,
	vlNumeric = 1,
	vlString = 2,
	vlDate = 3,
	vlName = 4,
	vlOperator = 5,
	vlRemark = 6,
	vlUnknown = 7,
};
enum TypeContextInfoItemFrom {
	tcfContext = 0,
	tcfGlobal = 1,
	tcfCmnModule = 2,
	tcfModuleSelf = 3,
	tcfTemplate = 4,
	tcfKeyword = 5,
};
enum TypeKinds {
	tkUndefined = 0,
	tkNull = 1,
	tkBoolean = 2,
	tkNumeric = 3,
	tkString = 4,
	tkDate = 5,
	tkObject = 100,
	tkType = 1000,
};
enum CloseAction {
	DelOnClose = 0,
	HideOnClose = 1,
	NoClose = 2,
};
enum ActivateType {
	atActivate = 0,
	atDeactivate = 1,
	atKillFocus = 2,
	atSetFocus = 3,
};
enum WndType {
	wtDock = 0,
	wtFloat = 1,
	wtMDI = 2,
	wtModal = 3,
};
enum WindowStyles {
	wsNoStyle = 1,
	wsSysMenu = 2,
	wsMinimizeBox = 4,
	wsMaximizeBox = 8,
	wsHelpBox = 16,
	wsBorder = 32,
	wsCaption = 64,
	wsSizable = 128,
	wsCloseOnEscape = 256,
};
enum ModalStates {
	msNone = 0,
	msPseudo = 1,
	msModal = 2,
};
enum TopLevelFrameType {
	eTLFT_Unknown = 0,
	eTLFT_Main = 1,
	eTLFT_Hidden = 2,
};
enum ViewStates {
	vsDock = 1,
	fsFloat = 2,
	vsMDI = 4,
	vsHardDock = 8,
	vsHiding = 16,
};
enum ViewPlacements {
	vpNo = 0,
	vpLeft = 1,
	vpTop = 2,
	vpRight = 4,
	vpBottom = 8,
	vpCenter = 16,
	vpTabbed = 32,
};
enum ViewOffsets {
	ViewContextOffset = 56,
	FocusedViewInCoreFrame = 52,
	ActiveViewInCoreFrame = 56,
	ViewContextInView = 88,
};

// Funcdefs
typedef bool array::(*less)(const T&, const T&);
typedef string (*RegExpReplaceFunc)(RegExpResult&&);
typedef uint (*WndFunc)(uint, uint, uint);
typedef bool (*HotKeyHandler)();
typedef void (*TimerProc)(uint);

// Typedefs
typedef uint int_ptr;
typedef uint size_t;
typedef uint HWND;
typedef uint HANDLE;
typedef uint HDC;
typedef uint COLORREF;
typedef uint HICON;
typedef uint HMENU;
typedef uint UINT;
typedef int BOOL;
typedef uint8 BYTE;
typedef uint PTR;
typedef uint DWORD;
typedef uint HFONT;
typedef uint HGDIOBJ;
typedef uint HMONITOR;
typedef uint WPARAM;
typedef uint LPARAM;
typedef uint LRESULT;
typedef int LONG;
typedef int long;
typedef uint uptr_t;
typedef uint sptr_t;
typedef int Sci_Position;
typedef uint Sci_PositionU;
typedef int Sci_PositionCR;
typedef uint Sci_SurfaceID;
typedef uint16 wchar_t;

// Objects
template <class T>
class array {
public:
	T& operator[](uint index);
	const T& operator[](uint index) const;
	array<T>& operator=(const array<T>&);
	void insertAt(uint index, const T& value);
	void insertAt(uint index, const array<T>& arr);
	void insertLast(const T& value);
	void removeAt(uint index);
	void removeLast();
	void removeRange(uint start, uint count);
	void reserve(uint length);
	void resize(uint length);
	void sortAsc();
	void sortAsc(uint startAt, uint count);
	void sortDesc();
	void sortDesc(uint startAt, uint count);
	void reverse();
	int find(const T& value) const;
	int find(uint startAt, const T& value) const;
	int findByRef(const T& value) const;
	int findByRef(uint startAt, const T& value) const;
	bool operator==(const array<T>&) const;
	bool isEmpty() const;
	void sort(array::less&, uint startAt = 0, uint count = uint ( - 1 ));
	uint length;
	void set_length(uint);
};

template <class T>
class grid {
public:
	T& operator[](uint, uint);
	const T& operator[](uint, uint) const;
	void resize(uint width, uint height);
	uint width() const;
	uint height() const;
};

class any {
public:
	any& operator=(any&);
	void store(?&);
	void store(const int64&);
	void store(const double&);
	bool retrieve(?&);
	bool retrieve(int64&);
	bool retrieve(double&);
};

class RegExp {
public:
	int find(const string&, uint offset = 0, uint& len);
	uint countOf(const string&, uint maxCount = 0, uint offset = 0);
	RegExpResult&& match(const string&, uint maxCount = 0, uint offset = 0);
	string& replace(string&, const string& repl, uint maxCount = 0, uint offset = 0);
	string& replace(string&, RegExpReplaceFunc&& cb, uint maxCount = 0, uint offset = 0);
	array<string>&& split(const string&) const;
	string extract(const string& text) const;
	string& remove(string& text) const;
	const bool isValid;	// 0xC (12)
	const string errorString;	// 0x8 (8)
};

class RegExpResult {
public:
	uint begin(uint match, uint group) const;
	uint len(uint match, uint group) const;
	const string& text(uint match, uint group) const;
	const uint matches;	// 0x4 (4)
	const uint groups;	// 0x8 (8)
};

class NoCaseSet {
public:
	~NoCaseSet();
	NoCaseSet();
	uint count() const;
	bool contains(const string& key) const;
	bool insert(const string& key);
	bool remove(const string& key);
	void clear();
	void swap(NoCaseSet& other);
	NoCaseSetIterator begin() const;
};

class NoCaseSetIterator {
public:
	~NoCaseSetIterator();
	NoCaseSetIterator();
	NoCaseSetIterator(const NoCaseSetIterator& other);
	NoCaseSetIterator& operator=(const NoCaseSetIterator& other);
	bool next();
	bool operator++(int);
	const string& key;
};

template <class T>
class UintMap {
public:
	~UintMap();
	UintMap(int&);
	uint count() const;
	bool contains(uint key) const;
	bool insert(uint key, const T& val);
	bool tryInsert(uint key, const T& val);
	bool remove(uint key);
	void clear();
	void swap(UintMap<T>& other);
	UintMapIterator<T> begin() const;
	UintMapIterator<T> find(uint key) const;
};

template <class T>
class UintMapIterator {
public:
	~UintMapIterator();
	UintMapIterator(int&);
	UintMapIterator<T>& operator=(const UintMapIterator<T>&);
	bool next();
	bool operator++(int);
	bool isEnd() const;
	uint key;
	T& value;
};

template <class T>
class NoCaseMap {
public:
	~NoCaseMap();
	NoCaseMap(int&);
	uint count() const;
	bool contains(const string& key) const;
	bool insert(const string& key, const T& val);
	bool tryInsert(const string& key, const T& val);
	bool remove(const string& key);
	void clear();
	void swap(NoCaseMap<T>& other);
	NoCaseMapIterator<T> begin() const;
	NoCaseMapIterator<T> find(const string& key) const;
};

template <class T>
class NoCaseMapIterator {
public:
	~NoCaseMapIterator();
	NoCaseMapIterator(int&);
	NoCaseMapIterator<T>& operator=(const NoCaseMapIterator<T>&);
	bool next();
	bool operator++(int);
	bool isEnd() const;
	const string& key;
	T& value;
};

class utf8string {
public:
	~utf8string();
	utf8string();
	utf8string(uint text, uint len = - 1);
	utf8string(const utf8string& other);
	uint length;
	operator uint() const;
	operator string() const;
	string str;
	uint ptr;	// 0x0 (0)
};

class StringComparator {
public:
	~StringComparator();
	StringComparator();
	void setPattern(const string& str, StringCompareMethod cm);
	bool match(const string& str) const;
};

class string {
public:
	~string();
	string();
	string(const char*);
	string(const string& other);
	string(const uint16& rawPtr);
	string(uint addr, uint len);
	string(const string& pattern, uint repeat);
	string(uint num);
	string(int num);
	string(uint64 num);
	string(int64 num);
	string(double num);
	string(bool val);
	int find(RegExp&&, uint offset = 0, uint& len) const;
	uint countOf(RegExp&&, uint maxCount = 0, uint offset = 0) const;
	RegExpResult&& match(RegExp&&, uint maxCount = 0, uint offset = 0) const;
	string& replace(RegExp&&, const string& repl, uint maxCount = 0, uint offset = 0);
	string& replace(RegExp&&, RegExpReplaceFunc&& cb, uint maxCount = 0, uint offset = 0);
	array<string>&& split(RegExp&&) const;
	string extract(RegExp&&) const;
	string& remove(RegExp&&);
	void ctor(uint addr, uint len);
	string& operator=(const string& other);
	string& operator=(uint num);
	string& operator=(int num);
	string& operator=(uint64 num);
	string& operator=(int64 num);
	string& operator=(double num);
	string& operator=(bool val);
	string operator+(const string& other) const;
	string operator+(uint num) const;
	string operator+(int num) const;
	string operator+(uint64 num) const;
	string operator+(int64 num) const;
	string operator+(double num) const;
	string operator+(bool val) const;
	string& operator+=(const string& other);
	string& operator+=(uint num);
	string& operator+=(int num);
	string& operator+=(uint64 num);
	string& operator+=(int64 num);
	string& operator+=(double num);
	string& operator+=(bool val);
	int operator<(const string& other) const;
	void empty();
	string& trim();
	string& ltrim();
	string& rtrim();
	string& trim(const string& symbols);
	string& ltrim(const string& symbols);
	string& rtrim(const string& symbols);
	string trimmed() const;
	string ltrimmed() const;
	string rtrimmed() const;
	uint find(const string& pattern, uint offset = 0) const;
	uint find(uint16 symb, uint offset = 0) const;
	uint length;
	bool isEmpty() const;
	array<string>&& split(const string& delimiter) const;
	string& replace(const string& pattern, const string& repl);
	string& replace(uint16 from, uint16 to);
	string replaced(const string& pattern, const string& repl) const;
	string& makeUpper();
	string uppered() const;
	string& makeLower();
	string lowered() const;
	string& insert(uint pos, const string& text);
	string& insert(uint pos, uint16 symbol);
	string& remove(uint from, uint count = 1);
	string& replace(uint pos, uint16 symbol);
	string substr(int start, int len = 0) const;
	string mid(uint start, int len = - 1) const;
	string dup() const;
	int compareNoCase(const string& other) const;
	uint cstr;
	uint16 operator[](uint pos) const;
	uint setLength(uint);
	string& padRight(uint16 symbol, uint width);
	string& padLeft(uint16 symbol, uint width);
	bool beginFrom(const string& other) const;
	utf8string toUtf8() const;
	string& fromUtf8(const utf8string& other);
	uint self;
	operator v8string() const;
};

class Guid {
public:
	Guid(const string& str);
	bool parseString(const string& str);
	Guid& operator=(const string&);
	operator string() const;
	string str;
	bool operator==(const Guid&) const;
	GuidRef&& ref() const;
	uint self;
	uint data1;	// 0x0 (0)
	uint data2;	// 0x4 (4)
	uint data3;	// 0x6 (6)
	uint data4;	// 0x8 (8)
};

class SourcesThunkFixup {
public:
	~SourcesThunkFixup();
	SourcesThunkFixup();
};

class CppCatch {
public:
	~CppCatch();
	CppCatch(const string& typeName, ?& handler);
};

class TrapSwap {
public:
	~TrapSwap();
	TrapSwap();
	void setTrapByName(const string& module, const string& proc, int callType, ?&);
	void swap();
	void getOriginal(?&);
	const TrapState state;	// 0x10 (16)
};

class TrapVirtualStdCall {
public:
	~TrapVirtualStdCall();
	TrapVirtualStdCall();
	void setTrap(?& obj, uint vtIdx, ?& func, int callType = asCALL_STDCALL);
	void swap();
	void getOriginal(?&);
	const TrapState state;	// 0xC (12)
};

class ScriptError {
public:
	uint line;	// 0x0 (0)
	uint col;	// 0x4 (4)
	uint errCode;	// 0x8 (8)
	string source;	// 0xC (12)
	string description;	// 0x10 (16)
	string sourceCode;	// 0x14 (20)
	bool bDebugPossible;	// 0x18 (24)
};

class as_env {
public:
	const string& option(const string& key) const;
	bool optionsContainAndEqual(const string& key, const string& test) const;
	bool optionsContainAndNotEqual(const string& key, const string& test) const;
	uint64 optionAsNumber(const string& key, uint64 defVal) const;
	const string& dataDir;
	const string& moduleDir;
	const string& tempDir;
	const string& logDir;
	const string& dumpDir;
	string currentDir;
	void set_currentDir(const string& dir) const;
	string getEnvVar(const string& varName) const;
	uint logLevel;
	void showConsole() const;
	uint64 intParam(const string& name) const;
	const string& strParam(const string& name) const;
	const string mainFolder;	// 0x0 (0)
	const string processName;	// 0x4 (4)
	uint64 processVersion;	// 0x8 (8)
	uint64 coreAsVersion;	// 0x10 (16)
	const string strProcessVersion;	// 0x18 (24)
	const string strCoreAsVersion;	// 0x1C (28)
	const string ownerName;	// 0x20 (32)
};

class IUnknown {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	uint self;
	IUnknown& unk;
	operator IDispatch&&();
	operator IConnectionPointContainer&&();
	operator IBkEndUI&&();
	operator MyMessageHandler&&();
	operator ICtx2Disp&&();
	operator ICommandState&&();
	operator ICommandTarget&&();
	operator ICommandReceiver&&();
	operator IListCmdState&&();
	operator ICmdStateImpl&&();
	operator ICmdDescription&&();
	operator ICommandService&&();
	operator IV8DataSource&&();
	operator IGridUISource&&();
	operator IGrid&&();
	operator IV8Bookmark&&();
	operator ICalcValueCreator&&();
	operator IExecutionStateMediumInStream&&();
	operator IExternalCalculatorDebugger&&();
	operator IExternalCalculatorOwner&&();
	operator IDebugger&&();
	operator IDebugService&&();
	operator IPersistableDocument&&();
	operator IDocument&&();
	operator IPersistableObject&&();
	operator IOutPersistenceStorage&&();
	operator IInPersistenceStorage&&();
	operator IStreamPersistenceStorage&&();
	operator IDocumentSink&&();
	operator IEventRecipient&&();
	operator IEventService&&();
	operator IIdleService&&();
	operator IIdleHandler&&();
	operator IAppExitCancel&&();
	operator IFileSystem&&();
	operator IFile&&();
	operator IFileEx&&();
	operator IStorageRW&&();
	operator IUnpackFile&&();
	operator ITempFile&&();
	operator IDocumentFactory&&();
	operator ILangSettings&&();
	operator ICustomFormDesigner&&();
	operator ICopyHelperCreator&&();
	operator ICustomForm&&();
	operator ICustomFormLoader&&();
	operator IRuntimeModule&&();
	operator IForm&&();
	operator IFormCtrl&&();
	operator IFormDialog&&();
	operator IMDEditService&&();
	operator IInfoBaseService&&();
	operator IMDService&&();
	operator IConfigMngrUI&&();
	operator ITypesInfoProvider&&();
	operator IDataProviderInfo&&();
	operator IMDObject&&();
	operator IMDContainer&&();
	operator IMDParentLink&&();
	operator IMDClass&&();
	operator IConfigMngr&&();
	operator IConfigMngrUIOwner&&();
	operator IInfoBase&&();
	operator IMDEditHelper&&();
	operator IMDBaseObj&&();
	operator ILocalString&&();
	operator IMDEditModuleHelper&&();
	operator IMDTypedObj&&();
	operator IMDExtObj&&();
	operator IImage&&();
	operator IV8Picture&&();
	operator IGlyph&&();
	operator IV8PictureValue&&();
	operator SCOM_Process&&();
	operator IGlobalContext&&();
	operator IGlobalContextInit&&();
	operator IProfileFolder&&();
	operator IProfileService&&();
	operator IProfileSource&&();
	operator IPropertyService&&();
	operator IControlDesign&&();
	operator ITextManager&&();
	operator ITextEditor&&();
	operator ITextManager_Operations&&();
	operator ITextParserCache&&();
	operator ITxtEdtOptions&&();
	operator IModuleEdit&&();
	operator ISourceLexer&&();
	operator ITxtEdtExtender&&();
	operator ITxtEdtService&&();
	operator ITemplateProcessor&&();
	operator IEdit&&();
	operator IDataControl&&();
	operator IDataControlEx&&();
	operator IFldEdit&&();
	operator IControlContext&&();
	operator IOutlineCoords&&();
	operator ITEIntelliSence&&();
	operator IV8Color&&();
	operator ITextExtBackColors&&();
	operator ITextExtColors&&();
	operator ITextExtention&&();
	operator TextManager&&();
	operator ITypeContextInfo&&();
	operator ITypeNameInfo&&();
	operator ISettingsConsumer&&();
	operator IContextDef&&();
	operator IContext&&();
	operator IAssistantData&&();
	operator IContextDefExt&&();
	operator IAssistListInfo&&();
	operator IAssistList&&();
	operator IType&&();
	operator IValue&&();
	operator IEnumValCreator&&();
	operator IIndexedCollectionRO&&();
	operator IIndexedCollectionFS&&();
	operator IValueArray&&();
	operator IVTColumnRO&&();
	operator IVTColumn&&();
	operator IVTRowRO&&();
	operator IVTRow&&();
	operator IValueTableBaseRO&&();
	operator IValueTableBase&&();
	operator IValueTableColumns&&();
	operator IValueTable&&();
	operator IValueSubTree&&();
	operator IValueTreeRow&&();
	operator IValueTree&&();
	operator IValueStructure&&();
	operator IView&&();
	operator IWindowView&&();
	operator IFramedView&&();
	operator IDocumentView&&();
	operator ITopLevelFrame&&();
	operator IWindow&&();
	operator ITopLevelFrameCore&&();
	operator IContainedObject&&();
	operator IClientSite&&();
	operator IContainer&&();
	operator IFramedViewSite&&();
	operator IViewContext&&();
	operator IViewLayouter&&();
	operator ITabbedLayouter&&();
	operator IViewSplitter&&();
	operator IMDIClient&&();
	operator IFormViewCore&&();
	operator Window&&();
};

class IDispatch {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	bool findMember(const string& name, int& id);
	bool getParamsCount(int id, int& params);
	bool call(int id, array<Variant>& args, Variant& res);
	bool getProp(const string& name, Variant& res);
	bool setProp(const string& name, const Variant& newVal);
};

class IConnectionPointContainer {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint FindConnectionPoint(const Guid& riid, IUnknown&&&);
};

class TYPEATTR {
public:
	TYPEATTRRef&& ref() const;
	uint self;
	Guid guid;	// 0x0 (0)
	uint lcid;	// 0x10 (16)
	uint dwReserved;	// 0x14 (20)
	int memidConstructor;	// 0x18 (24)
	int memidDestructor;	// 0x1C (28)
	uint lpstrSchema;	// 0x20 (32)
	uint cbSizeInstance;	// 0x24 (36)
	uint typekind;	// 0x28 (40)
	uint16 cFuncs;	// 0x2C (44)
	uint16 cVars;	// 0x2E (46)
	uint16 cImplTypes;	// 0x30 (48)
	uint16 cbSizeVft;	// 0x32 (50)
	uint16 cbAlignment;	// 0x34 (52)
	uint16 wTypeFlags;	// 0x36 (54)
	uint16 wMajorVerNum;	// 0x38 (56)
	uint16 wMinorVerNum;	// 0x3A (58)
	uint64 tdescAlias;	// 0x3C (60)
	uint64 idldescType;	// 0x44 (68)
};

class FUNCDESC {
public:
	FUNCDESCRef&& ref() const;
	uint self;
	uint memid;	// 0x0 (0)
	uint lprgscode;	// 0x4 (4)
	uint lprgelemdescParam;	// 0x8 (8)
	uint funckind;	// 0xC (12)
	uint invkind;	// 0x10 (16)
	uint callconv;	// 0x14 (20)
	uint16 cParams;	// 0x18 (24)
	uint16 cParamsOpt;	// 0x1A (26)
	uint16 oVft;	// 0x1C (28)
	uint16 cScodes;	// 0x1E (30)
};

class SqliteTransactionGuard {
public:
	~SqliteTransactionGuard();
	SqliteTransactionGuard(uint _db);
	SqliteTransactionGuardRef&& ref() const;
	uint self;
	void ctor(uint _db);
	void dtor();
	uint db;	// 0x0 (0)
	bool success;	// 0x4 (4)
};

class LOGFONT {
public:
	LOGFONTRef&& ref() const;
	uint self;
	int lfHeight;	// 0x0 (0)
	int lfWidth;	// 0x4 (4)
	int lfEscapement;	// 0x8 (8)
	int lfOrientation;	// 0xC (12)
	int lfWeight;	// 0x10 (16)
	uint8 lfItalic;	// 0x14 (20)
	uint8 lfUnderline;	// 0x15 (21)
	uint8 lfStrikeOut;	// 0x16 (22)
	uint8 lfCharSet;	// 0x17 (23)
	uint8 lfOutPrecision;	// 0x18 (24)
	uint8 lfClipPrecision;	// 0x19 (25)
	uint8 lfQuality;	// 0x1A (26)
	uint8 lfPitchAndFamily;	// 0x1B (27)
	uint16 lfFaceNameStart;	// 0x1C (28)
	uint16 lfFaceNameEnd;	// 0x5A (90)
};

class MONITORINFO {
public:
	MONITORINFORef&& ref() const;
	uint self;
	uint cbSize;	// 0x0 (0)
	Rect rcMonitor;	// 0x4 (4)
	Rect rcWork;	// 0x14 (20)
	uint dwFlags;	// 0x24 (36)
};

class MSG {
public:
	MSGRef&& ref() const;
	uint self;
	uint hwnd;	// 0x0 (0)
	uint message;	// 0x4 (4)
	uint wParam;	// 0x8 (8)
	uint lParam;	// 0xC (12)
	uint time;	// 0x10 (16)
	Point pt;	// 0x14 (20)
};

class Rect {
public:
	Rect();
	Rect(int, int, int, int);
	RectRef&& ref() const;
	uint self;
	void ctor();
	void ctor(int, int, int, int);
	Rect& combine(const Rect&);
	Rect& inflate(int, int);
	Rect& intersect(const Rect&);
	Rect& normalize();
	Rect& offset(int, int);
	int left;	// 0x0 (0)
	int top;	// 0x4 (4)
	int right;	// 0x8 (8)
	int bottom;	// 0xC (12)
};

class Point {
public:
	Point();
	PointRef&& ref() const;
	uint self;
	void ctor();
	int x;	// 0x0 (0)
	int y;	// 0x4 (4)
};

class Size {
public:
	~Size();
	Size();
	SizeRef&& ref() const;
	uint self;
	void ctor();
	void dtor();
	int cx;	// 0x0 (0)
	int cy;	// 0x4 (4)
};

class MINMAXINFO {
public:
	MINMAXINFORef&& ref() const;
	uint self;
	Point ptReserved;	// 0x0 (0)
	Point ptMaxSize;	// 0x8 (8)
	Point ptMaxPosition;	// 0x10 (16)
	Point ptMinTrackSize;	// 0x18 (24)
	Point ptMaxTrackSize;	// 0x20 (32)
};

class FILETIME {
public:
	FILETIMERef&& ref() const;
	uint self;
	uint dwLowDateTime;	// 0x0 (0)
	uint dwHighDateTime;	// 0x4 (4)
};

class WIN32_FIND_DATA {
public:
	WIN32_FIND_DATARef&& ref() const;
	uint self;
	uint dwFileAttributes;	// 0x0 (0)
	FILETIME ftCreationTime;	// 0x4 (4)
	FILETIME ftLastAccessTime;	// 0xC (12)
	FILETIME ftLastWriteTime;	// 0x14 (20)
	uint nFileSizeHigh;	// 0x1C (28)
	uint nFileSizeLow;	// 0x20 (32)
	uint dwReserved0;	// 0x24 (36)
	uint dwReserved1;	// 0x28 (40)
	int cFileName;	// 0x2C (44)
};

class GuidRef {
public:
	uint self;
	int operator<(uint);
	int operator<(GuidRef&&);
	GuidRef&& operator+(uint) const;
	Guid ref;	// 0x0 (0)
};

class TYPEATTRRef {
public:
	uint self;
	int operator<(uint);
	int operator<(TYPEATTRRef&&);
	TYPEATTRRef&& operator+(uint) const;
	TYPEATTR ref;	// 0x0 (0)
};

class FUNCDESCRef {
public:
	uint self;
	int operator<(uint);
	int operator<(FUNCDESCRef&&);
	FUNCDESCRef&& operator+(uint) const;
	FUNCDESC ref;	// 0x0 (0)
};

class SqliteTransactionGuardRef {
public:
	uint self;
	int operator<(uint);
	int operator<(SqliteTransactionGuardRef&&);
	SqliteTransactionGuardRef&& operator+(uint) const;
	SqliteTransactionGuard ref;	// 0x0 (0)
};

class LOGFONTRef {
public:
	uint self;
	int operator<(uint);
	int operator<(LOGFONTRef&&);
	LOGFONTRef&& operator+(uint) const;
	LOGFONT ref;	// 0x0 (0)
};

class MONITORINFORef {
public:
	uint self;
	int operator<(uint);
	int operator<(MONITORINFORef&&);
	MONITORINFORef&& operator+(uint) const;
	MONITORINFO ref;	// 0x0 (0)
};

class MSGRef {
public:
	uint self;
	int operator<(uint);
	int operator<(MSGRef&&);
	MSGRef&& operator+(uint) const;
	MSG ref;	// 0x0 (0)
};

class RectRef {
public:
	uint self;
	int operator<(uint);
	int operator<(RectRef&&);
	RectRef&& operator+(uint) const;
	Rect ref;	// 0x0 (0)
};

class PointRef {
public:
	uint self;
	int operator<(uint);
	int operator<(PointRef&&);
	PointRef&& operator+(uint) const;
	Point ref;	// 0x0 (0)
};

class SizeRef {
public:
	uint self;
	int operator<(uint);
	int operator<(SizeRef&&);
	SizeRef&& operator+(uint) const;
	Size ref;	// 0x0 (0)
};

class MINMAXINFORef {
public:
	uint self;
	int operator<(uint);
	int operator<(MINMAXINFORef&&);
	MINMAXINFORef&& operator+(uint) const;
	MINMAXINFO ref;	// 0x0 (0)
};

class FILETIMERef {
public:
	uint self;
	int operator<(uint);
	int operator<(FILETIMERef&&);
	FILETIMERef&& operator+(uint) const;
	FILETIME ref;	// 0x0 (0)
};

class WIN32_FIND_DATARef {
public:
	uint self;
	int operator<(uint);
	int operator<(WIN32_FIND_DATARef&&);
	WIN32_FIND_DATARef&& operator+(uint) const;
	WIN32_FIND_DATA ref;	// 0x0 (0)
};

class Variant {
public:
	~Variant();
	Variant();
	Variant(const Variant&);
	Variant(IDispatch&&);
	Variant& operator=(const Variant&);
	bool changeType(uint16 type);
	IDispatch&& getDispatch();
	void setDispatch(IDispatch&&);
	uint16 vt;	// 0x0 (0)
	uint8 byte;	// 0x8 (8)
	uint16 word;	// 0x8 (8)
	uint dword;	// 0x8 (8)
	uint64 qword;	// 0x8 (8)
	float real;	// 0x8 (8)
	double dreal;	// 0x8 (8)
};

class ActiveScript {
public:
	uint prepare(const string& engine, const string& source, uint startLine, const string& uName, bool bDebug, ScriptSite&& site);
	uint addNamedItem(const string& name, IUnknown&& object, bool isGlobal);
	IUnknown&& getObject();
	uint run();
	void stop();
	void abort();
	array<string>&& extractMacroses();
	bool invokeMacros(const string& name, Variant& res);
};

class ScriptSite {
public:
	bool onScriptError(const ScriptError& err);
	void enter();
	void leave();
};

class ASWnd {
public:
	void setMessages(const array<uint>& messages);
	uint doDefault();
};

class SmartBoxWindow {
public:
	~SmartBoxWindow();
	SmartBoxWindow();
	void createWindow(SmartBoxSite&& site, uint styles, uint exStyles, uint hWndParent = 0, uint ctrlID = 0);
	void setItems(?& items);
	void setCurrentIdx(uint current);
	uint fullHeight(int items = - 1);
	void onParentPosChange();
	uint navigate(NavigateType to);
	const uint hwnd;	// 0x4 (4)
	const uint rowHeight;	// 0x80 (128)
	const uint currentIdx;	// 0x74 (116)
};

class ToolTipWindow {
public:
	~ToolTipWindow();
	ToolTipWindow();
	void create(uint parent);
	void setText(const string& text, int bHasBold, uint& width, uint& height);
	void destroy();
	const uint hwnd;	// 0x4 (4)
};

class SmartBoxItemData {
public:
	~SmartBoxItemData();
	SmartBoxItemData();
	string descr;	// 0x0 (0)
	string key;	// 0x4 (4)
	uint hotOrder;	// 0x8 (8)
	uint8 image;	// 0xC (12)
	bool exclude;	// 0xD (13)
};

class SmartBoxItemBaseIface {
public:
	SmartBoxItemData& data();
	void textForTooltip(string& text);
};

class ParseMethodResult {
public:
	bool isFlagSet(uint flag) const;
	bool isKeywordAllowed(uint keywLex) const;
	uint localVarsCount() const;
	LocalVarItem& localVar(uint idx) const;
	LocalVarItem&& findLocalVar(const string& name);
	uint flags;	// 0x0 (0)
	uint allowedPreprocContextes;	// 0x4 (4)
	uint allowedAccesses;	// 0x8 (8)
	uint idxOfParam;	// 0xC (12)
	uint posOfParamMethod;	// 0x10 (16)
	uint lenOfParamMethod;	// 0x14 (20)
};

class LocalVarItem {
public:
	uint assignesCount() const;
	uint assignLine(uint idx) const;
	uint assignPos(uint idx) const;
	string name;	// 0x4 (4)
	uint type;	// 0x8 (8)
};

class ModuleStruct {
public:
	uint varsCount() const;
	uint methsCount() const;
	ModuleStructVar& var(uint idx) const;
	ModuleStructMethod& meth(uint idx) const;
	uint preprocContextForLine(uint line) const;
};

class ModuleStructMethod {
public:
	uint paramsCount() const;
	const string& param(uint idx) const;
	string name;	// 0x4 (4)
	uint line;	// 0x8 (8)
	uint beginPos;	// 0xC (12)
	uint length;	// 0x10 (16)
	uint8 execContext;	// 0x14 (20)
	uint8 accesses;	// 0x15 (21)
	bool isExport;	// 0x16 (22)
	bool isFunction;	// 0x24 (36)
	bool hasErrorInDeclaration;	// 0x25 (37)
};

class ModuleStructVar {
public:
	string name;	// 0x4 (4)
	uint line;	// 0x8 (8)
	uint beginPos;	// 0xC (12)
	uint length;	// 0x10 (16)
	uint8 execContext;	// 0x14 (20)
	uint8 accesses;	// 0x15 (21)
	bool isExport;	// 0x16 (22)
};

class lex_provider {
public:
	~lex_provider();
	lex_provider();
	lex_provider(uint start, uint line = 1);
	void setSource(uint start, uint line = 1);
	bool atEnd() const;
	bool next(lexem& lex);
	bool nextWithKeyword(lexem& lex);
	uint start;	// 0x4 (4)
	uint pos;	// 0x0 (0)
	uint line;	// 0x8 (8)
};

class lexem {
public:
	~lexem();
	lexem();
	lexem(const lexem& other);
	lexem& operator=(const lexem&);
	bool isEmpty() const;
	void empty();
	string text;
	string parseQuote() const;
	uint start;	// 0x0 (0)
	uint line;	// 0x4 (4)
	uint length;	// 0x8 (8)
	uint type;	// 0xC (12)
};

class SmartBoxSite {
public:
	void onDoSelect(SmartBoxItemBaseIface&& selItem);
	bool onKeydown(uint wParam, uint lParam);
	void onChar(uint wParam, uint lParam);
	bool onKillFocus(uint newWnd);
};

class IBkEndUI {
public:
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void openView(IFramedView& view, const ViewPosition& pos = ViewPosition ( ), int openIn = 0, bool activate = true, const Guid& g = IID_NULL);
	int doModal1(IFramedView& pView, uint i1, uint i2, uint i3, uint i4, uint i5, uint i6, uint i7, uint i8);
	int messageBox(const v8string& text, uint type = 0, uint timeout = 0, uint caption = 0, uint parent = 0, mbp& param = mbp ( ), uint i1 = 0, uint i2 = 0, uint i3 = 0, uint i4 = 0, uint i5 = 0);
	int doModal2(IFramedView& pView, uint i1, uint i2, uint i3, uint i4, uint i5, uint i6, uint i7);
	ModalStates currentModalState();
	int doMsgLine(const v8string& text, uint marker = mNone, const Guid& g = IID_NULL, uint i1 = 0, IUnknown&& pUnkObject = null, const V8Picture& customMarker = V8Picture ( ));
	bool GetFileName(SelectFileName& data, int timeout, uint parent);
};

class MyMessageHandler {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void process();
};

class mbp {
public:
	mbp();
	mbpRef&& ref() const;
	uint self;
	void ctor();
	uint pNode;	// 0x0 (0)
	uint size;	// 0x4 (4)
	uint fakeNode;	// 0x8 (8)
	uint prev;	// 0xC (12)
	uint next;	// 0x10 (16)
	int8 i1;	// 0x14 (20)
	int8 i2;	// 0x15 (21)
};

class SelectFileName {
public:
	SelectFileNameRef&& ref() const;
	uint self;
	SelectFileMode mode;	// 0x0 (0)
	uint flags;	// 0x4 (4)
	Vector filter;	// 0x8 (8)
	v8string filterString;	// 0x14 (20)
	uint filterIndex;	// 0x2C (44)
	v8string defExt;	// 0x30 (48)
	v8string initialFileName;	// 0x48 (72)
	Vector selectedFiles;	// 0x60 (96)
	v8string directory;	// 0x6C (108)
	v8string title;	// 0x84 (132)
};

class ICtx2Disp {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	IUnknown&& getContext();
};

class CommandID {
public:
	CommandID(const Guid& group, uint num);
	CommandIDRef&& ref() const;
	uint self;
	void ctor(const Guid& group, uint num);
	Guid group;	// 0x0 (0)
	uint num;	// 0x10 (16)
};

class Command {
public:
	Command(const CommandID& _id, uint p);
	CommandRef&& ref() const;
	uint self;
	void ctor(const CommandID& _id, uint p);
	CommandID id;	// 0x0 (0)
	int param;	// 0x14 (20)
	uint object;	// 0x18 (24)
};

class ICommandState {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	const CommandID& id();
	int param();
	IUnknown&& object();
	void enable(bool enable);
	void setCheck(bool check);
	void setText(const v8string& text);
	void setDescription(const v8string& text);
	void setTooltipText(const v8string& text);
};

class ICommandTarget {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	bool onExecute(const Command& command);
	bool onQueryStatus(ICommandState&& state);
	bool request(const CommandID& id);
};

class ICommandReceiver {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void transmitCommand(const Command& command, bool deactivate = true);
	void updateState(ICommandState&& state);
	bool hasHandler(const CommandID& id);
};

class IListCmdState {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void setCount(uint count);
};

class ICmdStateImpl {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void setCommand(const CommandID& id, IUnknown&& state);
	CommandID id;	// 0x10 (16)
	ICommandState&& cmdState;	// 0x24 (36)
	IListCmdState&& lstState;	// 0x28 (40)
};

class KeyAccel {
public:
	KeyAccelRef&& ref() const;
	uint self;
	v8string text;	// 0x0 (0)
	uint vkCode;	// 0x18 (24)
	uint8 flags;	// 0x1C (28)
};

class ICmdDescription {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	const CommandID& id();
	v8string text();
	uint image(IImage&&&);
	v8string accelText();
	v8string description();
	v8string tooltip();
	v8string presentation();
};

class ICommandService {
public:
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint commandDescription(ICmdDescription&&&, const CommandID& id);
};

class CompositeID {
public:
	CompositeID();
	CompositeID(const Guid&);
	CompositeID(uint);
	CompositeID(uint, const Guid&);
	CompositeIDRef&& ref() const;
	uint self;
	void ctor();
	void ctor(const Guid&);
	void ctor(uint);
	void ctor(uint, const Guid&);
	bool operator==(const CompositeID&) const;
	int id;	// 0x0 (0)
	Guid uuid;	// 0x4 (4)
	bool emptyUuid;	// 0x14 (20)
};

class LineInfo {
public:
	LineInfoRef&& ref() const;
	uint self;
	bool hasChild;	// 0x0 (0)
	int level;	// 0x4 (4)
	bool expandable;	// 0x8 (8)
	IV8Bookmark&& bookmark;	// 0xC (12)
};

class IV8DataSource {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	DataSource_SourceType getSourceType();
	bool getLineInfo(IV8Bookmark& bkmk, LineInfo& lineInfo);
	bool getCellValue(IV8Bookmark& bkmk, uint colId, Value& val);
	uint getLinkedBookmark(IV8Bookmark&&&, IV8Bookmark&& bkmk, LinkType lt);
};

class IGridUISource {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	bool getCellFormat(IV8Bookmark& bkmk, uint colId, Value& value, CellFormat& cellFormat);
};

class IGrid {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	bool setDataSource(IV8DataSource& dataSource, uint gridUISource = 0);
	IV8DataSource& getDataSource();
	IGridUISource& getUISource();
	void setCurrentColumnId(uint id);
	uint getCurrentColumnId();
	bool setActiveCell(IV8Bookmark&, uint id, bool show, RowActivateType at, int, int);
	uint getCurrentLine(IV8Bookmark&&&);
	bool expandLine(IV8Bookmark& bkmk, bool expand, bool expandChildren, bool show = true, bool p = true);
	bool isExpandedLine(IV8Bookmark& bkmk);
	CheckState getCellCheck(IV8Bookmark& bkmk, uint id);
	void setCellCheck(IV8Bookmark& bkmk, uint id, CheckState st);
	uint columnsCount();
};

class ImageInfo {
public:
	ImageInfoRef&& ref() const;
	uint self;
	void init();
	uint image;	// 0x0 (0)
	Point posInPicture;	// 0x4 (4)
	uint paintStyle;	// 0xC (12)
};

class CellFormat {
public:
	CellFormatRef&& ref() const;
	uint self;
	void init();
	v8string text;	// 0x0 (0)
	CheckState state;	// 0x18 (24)
	ImageInfo image;	// 0x1C (28)
	ImageInfo extImage;	// 0x2C (44)
	Color clrBkg;	// 0x3C (60)
	Color clrText;	// 0x58 (88)
	Font font;	// 0x74 (116)
	bool readOnly;	// 0x114 (276)
	HAlign horAlign;	// 0x118 (280)
	VAlign verAlign;	// 0x11C (284)
	v8string tooltip;	// 0x120 (288)
	bool showAddCheck;	// 0x138 (312)
	bool visible;	// 0x139 (313)
	uint16 height;	// 0x13A (314)
	bool autoHeight;	// 0x13C (316)
	bool hyperLink;	// 0x13D (317)
	uint v8Style;	// 0x140 (320)
	uint16 validFields;	// 0x144 (324)
};

class IV8Bookmark {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
};

class ICalcValueCreator {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint create(IUnknown&&&, const v8string&);
};

class IExecutionStateMediumInStream {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void setFile(IFileEx& pIFileEx);
	uint getInStorage(IInPersistenceStorage&&&);
};

class IExternalCalculatorDebugger {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void f();
};

class IExternalCalculatorOwner {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void setExternalCalculator(IUnknown& pIExternalCalculator);
};

class IDebugger {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint getBigObject(IUnknown&&&);
};

class IDebugService {
public:
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	IDebugger& getDebugger();
};

class IPersistableDocument {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	IDocument&& opCast();
	void save(IFile&& file);
	void load(IFile&& file);
};

class IDocument {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	operator IPersistableDocument&&();
	void save(IFile&& file);
	void load(IFile&& file);
	uint createView(IUnknown&&&);
	void enumAllViews(Vector& views);
	bool isModified();
	bool canClose();
	v8string getTitle();
	void setTitle(const v8string& title);
	void setConfigMode(bool configMode);
	bool getConfigMode();
	void getKey(v8string& key);
	const URL& url();
	const Guid& getKind();
	void setReadOnly(bool bFlag);
	bool getReadOnly();
};

class IPersistableObject {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	const Guid& getCLSID();
	void serialize(IOutPersistenceStorage&& storage);
	void deserialize(IInPersistenceStorage&& storage);
};

class IOutPersistenceStorage {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void f();
};

class IInPersistenceStorage {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void f();
};

class IStreamPersistenceStorage {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void setFile(IFile&& file);
	void open(const URL& url);
	void close();
};

class IDocumentSink {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void f();
};

class DocSink {
public:
	DocSinkRef&& ref() const;
	uint self;
	uint vtab;	// 0x0 (0)
	int refCount;	// 0x4 (4)
	uint i1;	// 0x8 (8)
	uint i2;	// 0xC (12)
	IUnknown&& editHelper;	// 0x10 (16)
	Guid propId;	// 0x14 (20)
};

class IEventRecipient {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void onEvent(const Guid& eventID, int val, IUnknown& obj);
};

class IEventService {
public:
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void notify(const Guid& eventID, int val = 0, IUnknown&& obj = null);
	void subscribe(const Guid& eventID, IEventRecipient&& pRecipient);
	void unsubscribe(const Guid& eventID, IEventRecipient&& pRecipient);
};

class IIdleService {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void addIdleHandler(IIdleHandler&&& handler);
	void removeIdleHandler(IIdleHandler&&& handler);
	void postEvent(const Guid& id, int val = 0, IUnknown&& obj = null);
};

class IIdleHandler {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	bool onIdle(int count);
	int unknown();
};

class IAppExitCancel {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void cancelExit(bool hide = false);
};

class IFileSystem {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint openURL(IFile&&&, const URL& url, int mode);
};

class IFile {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	IFileEx&& opCast();
	uint url(URL&);
	uint read(uint buffer, uint count);
	void write(uint buffer, uint count);
	void flush();
};

class IFileEx {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	operator IFile&&();
	uint url(URL&);
	uint read(uint buffer, uint count);
	void write(uint buffer, uint count);
	void flush();
	uint64 seek(int64 pos, FileSeekMode mode);
	uint64 setEOF();
};

class StorageFileInfo {
public:
	~StorageFileInfo();
	StorageFileInfoRef&& ref() const;
	uint self;
	void dtor();
	v8string name;	// 0x20 (32)
};

class IStorageRW {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void initFromPath(const URL& path, FileOpenModes mode);
	void initFromFile(IFileEx&& file, StorageCreateFlags flags = scfNone);
	void createNewFromPath(const URL& path, FileOpenModes mode, StorageCreateFlags flags = scfTruncate, uint blockSize = 512);
	void createNewFromFile(IFile&& file, StorageCreateFlags flags = scfTruncate, uint blockSize = 512);
	uint find(Vector& res, uint pPattern);
	uint open(IFileEx&&& res, const v8string& fileName, FileOpenModes mode);
	void remove(uint pPattern);
	void rename(const v8string& oldFileName, const v8string& newFileName);
};

class FileException {
public:
	FileExceptionRef&& ref() const;
	uint self;
	Guid id;	// 0x0 (0)
	v8string descr;	// 0x10 (16)
	uint ptr;	// 0x28 (40)
	int code;	// 0x2C (44)
	URL url;	// 0x30 (48)
};

class IUnpackFile {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void init(IFile&& dest, int t = 0);
};

class ITempFile {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint detach(URL&);
	void attach(const URL& url);
	void setMemLimit(uint limit);
	uint getMemLimit();
};

class Font {
public:
	FontRef&& ref() const;
	uint self;
	int kind;	// 0x0 (0)
	LOGFONT lf;	// 0x4 (4)
	bool autoCharSet;	// 0x60 (96)
	CompositeID style;	// 0x64 (100)
	uint validMask;	// 0x7C (124)
};

class IDocumentFactory {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint createDocument(IDocument&&&, const v8string& initData);
};

class ILangSettings {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	v8string currentLanguage();
	v8string defaultLanguage();
	int mainLang();
	void languages(Vector& langs);
};

class ICustomFormDesigner {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void init();
	void setFormSettings(IUnknown& settings, const Guid& iid);
	void prepare();
	uint getForm(IUnknown&&&);
	uint getModule(IDocument&&&);
	void setModuleWizardCLSID(const Guid& id);
};

class ICopyHelperCreator {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void setIids(const Guid& guid, const Vector& iids);
};

class ICustomForm {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint getFormController(IUnknown&&&, CompositeID&);
	void setRuntimeModule(IUnknown& runtimeModule);
};

class ICustomFormLoader {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void loadCustomForm(IFile& file, ICustomForm& form);
};

class IRuntimeModule {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void init(IContext& context);
	int findProp(const v8string& name);
	void setPropVal(int prop, const Value& value);
	void getPropVal(int prop, Value& value);
	int findMeth(const v8string& name);
	int getParamsCount(int meth);
	bool call(int meth, Value& ret, Vector& params, bool);
	uint context(IContext&&&);
};

class IForm {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void prepareForm();
	bool setLayouter(const Guid& guid);
	uint getControlID(uint index);
	uint controlsCount();
	uint getControl(IUnknown&&& res, uint controlId, const Guid& iid);
	uint getActiveControlId();
	bool activateControl(uint controlId);
};

class IFormCtrl {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	bool setCode(const v8string& code);
	const v8string& getCode();
	void setTabPos(uint tabPos);
	uint getTabPos();
	bool getDefaultButton();
	void setDefaultButton(bool defaultButton);
	void setCommandSourceID(uint id);
	uint getCommandSourceID();
	void setModifyData(bool modifyData);
	bool getModifyData();
	void setSkipOnInput(bool skipOnInput);
	bool getSkipOnInput();
	void setFirstInGroup(bool flag);
	bool getFirstInGroup();
};

class IFormDialog {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	bool requestChangeData(uint controlId);
	bool processEvents(uint controlId, uint eventId, Vector& params);
	bool processChangeData(uint controlId);
	bool onExecuteCommand(const Command& command);
	bool onQueryCommandStatus(ICommandState& state);
	bool requestCommand(const CommandID& id);
	bool onExecuteControlCommand(const uint& controlID, const Command& command);
	bool onQueryControlCommandStatus(const uint& controlID, ICommandState& state);
	bool requestControlCommand(const uint& controlID, const CommandID& id);
};

class IMDEditService {
public:
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint getEditHelper(IMDEditHelper&&&, IMDObject& object);
	void openConfig(IConfigMngrUI& mngr, IMDContainer& container);
	uint getConfigMngrUI(IConfigMngrUI&&&, IMDObject&&);
	uint getTemplatesMainConfigMngrUI(IConfigMngrUI&&&);
};

class IInfoBaseService {
public:
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint connectConfig(IConfigMngr&&& res, IFile&& file, int mode, int t = 0, int m = 0);
	IInfoBase&& getDefault();
};

class IMDService {
public:
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	MDPropertyRef&& mdProp(const Guid& id);
	IMDClass&& mdClass(const Guid& id);
};

class IConfigMngrUI {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void mdTreeShow(bool show, bool activate = true);
	bool mdTreeIsVisible();
	IMDContainer&& getMDCont();
	uint getPictureCol(IUnknown&&&);
	uint getLangSettings(ILangSettings&&&);
	uint getStyleCol(IUnknown&&&);
	uint getTypesInfoProvider(ITypesInfoProvider&&&);
	bool isModified();
	v8string identifier();
	void activateObjInTree(const Guid& uuid, const Guid& propId, bool wndActivate);
};

class ITypesInfoProvider {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void typesInfo(const Guid& category, int alias, Vector& typesInfo);
	uint dataProviderInfo(IDataProviderInfo&&&, const Guid& type, int k = 0);
};

class IDataProviderInfo {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint fieldsCount();
	uint fieldId(CompositeID&, uint idx);
	uint defaultField(CompositeID&);
	bool fieldInfo(const CompositeID& id, FieldInfo& info);
};

class IMDObject {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	IMDContainer&& opCast();
	IMDBaseObj&& opCast();
	IMDClass&& mdClass;
	const Guid& id;
	void set_id(const Guid& id);
	void set_mdParentLink(IMDParentLink&& site);
	IMDParentLink&& mdParentLink;
	int mdPropVal(const Guid& mdPropId, Value& value);
	bool setMdPropVal(const Guid& mdPropId, const Value& value);
	bool validateMDPropValue(const Guid& mdPropId, Value& value, v8string& errString, bool);
	int mdPropVal(uint id, Value& value);
	bool setMdPropVal(uint id, const Value& value);
	bool validateMdPropVal(uint id, Value& value, v8string& errString, bool);
	uint childCount(const Guid& childMdKind);
	IMDObject&& child(const Guid& childMdKind, const Guid& id);
	IMDObject&& childAt(const Guid& childMdKind, uint index);
	bool isModified();
	void setModified(bool modified);
};

class IMDContainer {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	operator IMDObject&&();
	IMDClass&& mdClass;
	const Guid& id;
	void set_id(const Guid& id);
	void set_mdParentLink(IMDParentLink&& site);
	IMDParentLink&& mdParentLink;
	int mdPropVal(const Guid& mdPropId, Value& value);
	bool setMdPropVal(const Guid& mdPropId, const Value& value);
	bool validateMDPropValue(const Guid& mdPropId, Value& value, v8string& errString, bool);
	int mdPropVal(uint id, Value& value);
	bool setMdPropVal(uint id, const Value& value);
	bool validateMdPropVal(uint id, Value& value, v8string& errString, bool);
	uint childCount(const Guid& childMdKind);
	IMDObject&& child(const Guid& childMdKind, const Guid& id);
	IMDObject&& childAt(const Guid& childMdKind, uint index);
	bool isModified();
	void setModified(bool modified);
	IMDObject&& objById(const Guid& objId);
	IMDObject&& objByTypeId(const Guid& typeId);
	IConfigMngr&& getConfigMngr();
	IMDContainer&& masterContainer();
};

class IMDParentLink {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	IMDObject&& getMDObject();
};

class IMDClass {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	Guid& id;
	uint getName(int lang);
	int presentation(v8string& text);
	uint getClassName(int lang);
	int classPresentation(v8string&);
	uint propCount();
	const Guid& getPropIDAt(uint index);
	uint childClassesCount();
	const Guid& childClassIDAt(uint index);
};

class IConfigMngr {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	IMDContainer&& getMDCont(int i = 0);
	void extractConfig(IConfigMngr& target);
};

class IConfigMngrUIOwner {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	IConfigMngrUI&& getUI();
};

class IInfoBase {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	v8string connectString();
	IConfigMngr&& getConfigMgr();
};

class IMDEditHelper {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint extPropEditor(IUnknown&&&, const Guid& propUuid);
	const Guid& extPropEditorCLSID(const Guid& propUuid);
	uint extProp(IUnknown&&&, const Guid& propUuid, bool noCached = false);
	const Guid& extPropCLSID(const Guid& propUuid);
	void getTreeItemInfo(const Guid& id, MDTreeItemInfo& info, int k = 0);
	IMDObject&& getMDObj();
	void openEditor();
	bool changeProperty(const Guid& propId, const Value& value);
	void editProperty(const Guid& propUuid);
};

class IMDBaseObj {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	operator IMDObject&&();
	IMDTypedObj&& opCast();
	IMDClass&& mdClass;
	const Guid& id;
	void set_id(const Guid& id);
	void set_mdParentLink(IMDParentLink&& site);
	IMDParentLink&& mdParentLink;
	int mdPropVal(const Guid& mdPropId, Value& value);
	bool setMdPropVal(const Guid& mdPropId, const Value& value);
	bool validateMDPropValue(const Guid& mdPropId, Value& value, v8string& errString, bool);
	int mdPropVal(uint id, Value& value);
	bool setMdPropVal(uint id, const Value& value);
	bool validateMdPropVal(uint id, Value& value, v8string& errString, bool);
	uint childCount(const Guid& childMdKind);
	IMDObject&& child(const Guid& childMdKind, const Guid& id);
	IMDObject&& childAt(const Guid& childMdKind, uint index);
	bool isModified();
	void setModified(bool modified);
	const v8string& getName();
	v8string getSynonym(const v8string& lc);
	const v8string& getDescr();
};

class ILocalString {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	const LocalWString& localStrings();
};

class IMDEditModuleHelper {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	bool hasModule(const Guid& propId, Vector&);
	bool textOfModule(const Guid& propId, bool s, v8string& result);
	const Guid& moduleExpandType(const Guid& propId);
	uint openModule(ITextManager&&&, const Guid& propId, uint& open, ITextEditor&&& editor);
};

class IMDTypedObj {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	operator IMDBaseObj&&();
	IMDClass&& mdClass;
	const Guid& id;
	void set_id(const Guid& id);
	void set_mdParentLink(IMDParentLink&& site);
	IMDParentLink&& mdParentLink;
	int mdPropVal(const Guid& mdPropId, Value& value);
	bool setMdPropVal(const Guid& mdPropId, const Value& value);
	bool validateMDPropValue(const Guid& mdPropId, Value& value, v8string& errString, bool);
	int mdPropVal(uint id, Value& value);
	bool setMdPropVal(uint id, const Value& value);
	bool validateMdPropVal(uint id, Value& value, v8string& errString, bool);
	uint childCount(const Guid& childMdKind);
	IMDObject&& child(const Guid& childMdKind, const Guid& id);
	IMDObject&& childAt(const Guid& childMdKind, uint index);
	bool isModified();
	void setModified(bool modified);
	const v8string& getName();
	v8string getSynonym(const v8string& lc);
	const v8string& getDescr();
	const TypeDomainPattern& typeDomain();
};

class IMDExtObj {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint url(URL&);
};

class MDProperty {
public:
	MDPropertyRef&& ref() const;
	uint self;
	int refs;	// 0x0 (0)
	Guid id;	// 0x4 (4)
	uint nameEng;	// 0x14 (20)
	uint nameRus;	// 0x18 (24)
	uint i1;	// 0x1C (28)
	uint i2;	// 0x20 (32)
	uint resMod1;	// 0x24 (36)
	uint resID;	// 0x28 (40)
	uint resMod2;	// 0x2C (44)
	uint resCatID;	// 0x30 (48)
	IType&& pIType;	// 0x34 (52)
};

class FieldInfo {
public:
	FieldInfoRef&& ref() const;
	uint self;
	void init();
	v8string name1;	// 0x0 (0)
	v8string name2;	// 0x18 (24)
	v8string description;	// 0x30 (48)
	TypeDomainPattern typeDomain;	// 0x48 (72)
	bool readOnly;	// 0x4C (76)
};

class MDEventInfo {
public:
	MDEventInfoRef&& ref() const;
	uint self;
	bool request;	// 0x0 (0)
	bool result;	// 0x1 (1)
	EventMetaDataKind kind;	// 0x4 (4)
	IMDObject&& object;	// 0x8 (8)
	IMDObject&& parent;	// 0xC (12)
	Guid id;	// 0x10 (16)
	Guid changedPropId;	// 0x20 (32)
};

class TypeInfo {
public:
	~TypeInfo();
	TypeInfoRef&& ref() const;
	uint self;
	void dtor();
	Guid typeId;	// 0x0 (0)
	v8string name;	// 0x10 (16)
	int priority;	// 0x28 (40)
	int order;	// 0x2C (44)
	IGlyph&& image;	// 0x30 (48)
	uint i1;	// 0x34 (52)
	bool compaundType;	// 0x38 (56)
	bool unMergeable;	// 0x39 (57)
	v8string str;	// 0x3C (60)
};

class MDTreeItemInfo {
public:
	MDTreeItemInfoRef&& ref() const;
	uint self;
	void init();
	Guid id;	// 0x0 (0)
	v8string text;	// 0x10 (16)
	IMDEditHelper&& editHelper;	// 0x28 (40)
	IImage&& image;	// 0x2C (44)
};

class V8Picture {
public:
	V8Picture();
	V8PictureRef&& ref() const;
	uint self;
	void ctor();
	bool compareAttribs(const V8Picture&) const;
	bool opEqual(const V8Picture&) const;
	int kind;	// 0x0 (0)
	CompositeID cid;	// 0x4 (4)
	URL url;	// 0x1C (28)
	IV8Picture&& picture;	// 0x44 (68)
	Point pxForTransparent;	// 0x48 (72)
	bool withTransparent;	// 0x50 (80)
	bool isGlyph;	// 0x51 (81)
	Point ptGlyph;	// 0x54 (84)
	Size szGlyph;	// 0x5C (92)
};

class IImage {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
};

class IV8Picture {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
};

class IGlyph {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
};

class IV8PictureValue {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void setPicture(const V8Picture& picture);
	void getPicture(V8Picture& picture);
};

class Glyph {
public:
	GlyphRef&& ref() const;
	uint self;
	uint p1;	// 0x0 (0)
	uint p2;	// 0x4 (4)
	uint p3;	// 0x8 (8)
	uint p4;	// 0xC (12)
	IImage&& block;	// 0x10 (16)
	Size size;	// 0x14 (20)
	Point point;	// 0x1C (28)
};

class SCOM_Process {
public:
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	bool createByName(const v8string& clsName, const Guid& iid, IUnknown&&& ppObject);
	bool createByClsid(const Guid& clsid, const Guid& iid, IUnknown&&& ppObject);
	bool aggregateInstance(const Guid& clsid, IUnknown&& pOuter, IUnknown&&& ptr);
	int getCategoryClasses(Vector& clsids, const Guid& clsid);
	bool registerService(const Guid&, const Guid&);
	IUnknown&& getService(const Guid& idService);
	uint loadComponent(uint name);
};

class Exception {
public:
	ExceptionRef&& ref() const;
	uint self;
	Guid id;	// 0x0 (0)
	v8string descr;	// 0x10 (16)
	uint ptr;	// 0x28 (40)
};

class IGlobalContext {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
};

class IGlobalContextInit {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void init(IInfoBase& infoBase);
};

class IProfileFolder {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	IProfileService&& opCast();
	v8string getName();
	void createValue(const v8string& path, const Guid& sourceID, const Value& value);
	void createAndSetValue(const v8string& path, const Guid& sourceID, const Value& value);
	bool getULong(const v8string& path, uint& value);
	bool getLong(const v8string& path, int& value);
	bool getUInt(const v8string& path, uint& value);
	bool getInt(const v8string& path, int& value);
	bool getUShort(const v8string& path, uint16& value);
	bool getShort(const v8string& path, int16& value);
	bool getBool(const v8string& path, bool& value);
	bool getDate(const v8string& path, Date& value);
	bool getNumeric(const v8string& path, Numeric& value);
	bool getString(const v8string& path, v8string& value);
	bool getValue(const v8string& path, Value& value);
	bool setValue(const v8string& path, const Value& value);
	void deleteValue(const v8string& path);
	uint valuesCount();
	bool getULongAt(uint index, uint& value);
	bool getLongAt(uint index, int& value);
	bool getUIntAt(uint index, uint& value);
	bool getIntAt(uint index, int& value);
	bool getUShortAt(uint index, uint16& value);
	bool getShortAt(uint index, int16& value);
	bool getBoolAt(uint index, bool& value);
	bool getDateAt(uint index, Date& value);
	bool getNumericAt(uint index, Numeric& value);
	bool getStringAt(uint index, v8string& value);
	bool getValueAt(uint index, Value& value);
	bool getValueKeyAt(uint index, v8string& key);
	bool setValueAt(uint index, const Value& value);
	bool deleteValueAt(uint index);
	void createFolder(const v8string& path, const Guid& sourceID);
	void getFolder(IProfileFolder&&&, const v8string& path);
	void deleteFolder(const v8string& path);
	uint foldersCount();
	void getFolderAt(IProfileFolder&&&, uint index);
	bool deleteFolderAt(uint index);
};

class IProfileService {
public:
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	operator IProfileFolder&&();
	v8string getName();
	void createValue(const v8string& path, const Guid& sourceID, const Value& value);
	void createAndSetValue(const v8string& path, const Guid& sourceID, const Value& value);
	bool getULong(const v8string& path, uint& value);
	bool getLong(const v8string& path, int& value);
	bool getUInt(const v8string& path, uint& value);
	bool getInt(const v8string& path, int& value);
	bool getUShort(const v8string& path, uint16& value);
	bool getShort(const v8string& path, int16& value);
	bool getBool(const v8string& path, bool& value);
	bool getDate(const v8string& path, Date& value);
	bool getNumeric(const v8string& path, Numeric& value);
	bool getString(const v8string& path, v8string& value);
	bool getValue(const v8string& path, Value& value);
	bool setValue(const v8string& path, const Value& value);
	void deleteValue(const v8string& path);
	uint valuesCount();
	bool getULongAt(uint index, uint& value);
	bool getLongAt(uint index, int& value);
	bool getUIntAt(uint index, uint& value);
	bool getIntAt(uint index, int& value);
	bool getUShortAt(uint index, uint16& value);
	bool getShortAt(uint index, int16& value);
	bool getBoolAt(uint index, bool& value);
	bool getDateAt(uint index, Date& value);
	bool getNumericAt(uint index, Numeric& value);
	bool getStringAt(uint index, v8string& value);
	bool getValueAt(uint index, Value& value);
	bool getValueKeyAt(uint index, v8string& key);
	bool setValueAt(uint index, const Value& value);
	bool deleteValueAt(uint index);
	void createFolder(const v8string& path, const Guid& sourceID);
	void getFolder(IProfileFolder&&&, const v8string& path);
	void deleteFolder(const v8string& path);
	uint foldersCount();
	void getFolderAt(IProfileFolder&&&, uint index);
	bool deleteFolderAt(uint index);
	void attachSource(IProfileSource&& profileSource, const Guid&);
	void detachSource(const Guid&);
	void open();
	void flush();
	void close();
};

class IProfileSource {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void init(const v8string& path);
};

class IPropertyService {
public:
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void showPropWnd(bool show);
	bool isPropWndVisible();
};

class Sci_CharacterRange {
public:
	Sci_CharacterRangeRef&& ref() const;
	uint self;
	int cpMin;	// 0x0 (0)
	int cpMax;	// 0x4 (4)
};

class Sci_TextRange {
public:
	Sci_TextRangeRef&& ref() const;
	uint self;
	Sci_CharacterRange chrg;	// 0x0 (0)
	uint lpstrText;	// 0x8 (8)
};

class Sci_TextToFind {
public:
	Sci_TextToFindRef&& ref() const;
	uint self;
	Sci_CharacterRange chrg;	// 0x0 (0)
	uint lpstrText;	// 0x8 (8)
	Sci_CharacterRange chrgText;	// 0xC (12)
};

class Sci_Rectangle {
public:
	Sci_RectangleRef&& ref() const;
	uint self;
	int left;	// 0x0 (0)
	int top;	// 0x4 (4)
	int right;	// 0x8 (8)
	int bottom;	// 0xC (12)
};

class Sci_NotifyHeader {
public:
	Sci_NotifyHeaderRef&& ref() const;
	uint self;
	uint hwndFrom;	// 0x0 (0)
	uint idFrom;	// 0x4 (4)
	uint code;	// 0x8 (8)
};

class SCNotification {
public:
	SCNotificationRef&& ref() const;
	uint self;
	Sci_NotifyHeader nmhdr;	// 0x0 (0)
	int position;	// 0xC (12)
	int ch;	// 0x10 (16)
	int modifiers;	// 0x14 (20)
	int modificationType;	// 0x18 (24)
	uint text;	// 0x1C (28)
	int length;	// 0x20 (32)
	int linesAdded;	// 0x24 (36)
	int message;	// 0x28 (40)
	uint wParam;	// 0x2C (44)
	uint lParam;	// 0x30 (48)
	int line;	// 0x34 (52)
	int foldLevelNow;	// 0x38 (56)
	int foldLevelPrev;	// 0x3C (60)
	int margin;	// 0x40 (64)
	int listType;	// 0x44 (68)
	int x;	// 0x48 (72)
	int y;	// 0x4C (76)
	int token;	// 0x50 (80)
	int annotationLinesAdded;	// 0x54 (84)
	int updated;	// 0x58 (88)
	int listCompletionMethod;	// 0x5C (92)
};

class Vector {
public:
	~Vector();
	Vector();
	VectorRef&& ref() const;
	uint self;
	void ctor();
	void dtor();
	uint size();
	uint alloc(uint count, uint size);
	uint count(uint s);
	uint start;	// 0x0 (0)
	uint end;	// 0x4 (4)
	uint allocated;	// 0x8 (8)
};

class v8strData {
public:
	v8strDataRef&& ref() const;
	uint self;
	uint refCount;	// 0x0 (0)
	uint8 text;	// 0x4 (4)
};

class v8string {
public:
	~v8string();
	v8string();
	v8string(const v8string& other);
	v8string(uint text, uint l);
	v8stringRef&& ref() const;
	uint self;
	void ctor();
	void ctor1(const v8string& other);
	void ctor3(uint text, uint l);
	void dtor();
	operator string() const;
	uint cstr;
	uint length;
	void operator=(const v8string& s);
	bool isEmpty() const;
	void operator=(const string& s);
	string str;
	uint len;	// 0x0 (0)
	uint data;	// 0x4 (4)
	uint pEnd;	// 0x8 (8)
	int i1;	// 0xC (12)
	int i2;	// 0x10 (16)
};

class IControlDesign {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void setMode(ControlMode mode);
	ControlMode getMode();
};

class ITextManager {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	TextManager&& getTextManager();
};

class ITextEditor {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint getITextManager(ITextManager&&&);
	TextManager& getTextManager();
	void updateView();
	void updateLine(int nLine, bool bInScreenCoords = false);
	bool isELVisible(int nLine);
	int getVisibleLines();
	int getFirstVisible();
	int setFirstVisible(int nLine, bool bInScreenCoords = false);
	bool isSelectionEmpty();
	void setSelectionNull();
	uint getCaretPosition(TextPosition&, bool bInScreenCoords = false);
	void setCaretPosition(const TextPosition& tp, bool bInScreenCoords = false);
	void scrollToCaretPos();
	void getSelection(TextPosition& tpStart, TextPosition& tpStop, bool bInScreenCoords = false);
	void getSelectionText(v8string& str);
	void setSelectionText(const v8string& str);
	void getTextUnderCaretPos(v8string& str);
	void setSelection(const TextPosition& tpStart, const TextPosition& tpStop, bool bCaretToStart, bool bInScreenCoords = false);
	void setSepcialSel(int nLine, bool bInScreenCoords = true);
	int getSepcialSel(bool bInScreenCoords = true);
	void setUseContextMenu(bool bEnable = true);
	bool getUseContextMenu();
	void setUseProperty(bool bEnable = true);
	bool getUseProperty();
	void setAutomaticOfficeAreaUpdate(bool bNeedUpdateOfficeArea);
	bool getAutomaticOfficeAreaUpdate();
	uint getBookmarkColumnID();
	uint getOutlineColumnID();
	uint getWindowHandle();
};

class ITextManager_Operations {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	int setExtenderCLSID(const Guid&);
	int getExtenderCLSID(Guid&);
	void updateAllViews(int reason = 1, bool erase = false);
};

class ITextParserCache {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void clearCache();
};

class ITxtEdtOptions {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void loadDefault();
	void getFont(Font& font);
};

class IModuleEdit {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void f();
};

class ISourceLexer {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void splitToLexems(const v8string& source, Vector& lexems);
};

class ITxtEdtExtender {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	const Guid& getGuid();
	v8string getName();
};

class ITxtEdtService {
public:
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void setTxtDocExtender(ITextManager&& itm, ITxtEdtExtender&& tee);
	bool getExtenderCLSID(const uint& index, Guid& clsid);
	uint getExtender(ITxtEdtExtender&&&, ITextManager&& pITextManager, const Guid& clsid);
	uint extendersCount();
	uint extenderName(int idx);
	uint getTemplateProcessor(ITemplateProcessor&&&);
};

class ITemplateProcessor {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	bool needSubstitute(const v8string& strSrc, TextManager& tm, v8string& res);
	void processTemplate(const v8string& templName, const v8string& templStr, v8string& result, uint& nCaretStartOffset, const v8string& indent);
};

class IEdit {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	bool getText(v8string& str);
};

class IDataControl {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	bool setValue(const Value& value);
	void getValue(Value& value, bool bMake = true);
};

class IDataControlEx {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void supportedTypes(Vector& types, bool& supportDomain);
	void setTypeDomain(const TypeDomainPattern& typeDomain);
	void getTypeDomain(TypeDomainPattern& typeDomain);
};

class IFldEdit {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void test();
};

class IControlContext {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint getControlId();
	uint getControl(IUnknown&&& res, const Guid& iid);
};

class IOutlineCoords {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	bool convertTextPosition(TextPosition& tp, bool bFromScreen);
};

class ITEIntelliSence {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint getMousePos(Point&);
	uint getCaretPosForTooltip(Point&);
	uint getMousePosForTooltip(Point&);
	void getContextListPos(Point& caretPos, uint& lineHeight);
};

class Color {
public:
	Color(uint r, uint g, uint b);
	ColorRef&& ref() const;
	uint self;
	void ctor(uint r, uint g, uint b);
	int kind;	// 0x0 (0)
	CompositeID value;	// 0x4 (4)
};

class IV8Color {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void setColor(const Color& color);
	void getColor(Color& color);
};

class SyntaxItemInfo {
public:
	SyntaxItemInfo();
	SyntaxItemInfo(const SyntaxItemInfo& si);
	SyntaxItemInfoRef&& ref() const;
	uint self;
	void ctor();
	void ctor(const SyntaxItemInfo& si);
	void copy(const SyntaxItemInfo& si);
	uint start;	// 0x0 (0)
	uint len;	// 0x4 (4)
	Color color;	// 0x8 (8)
	BlockMarker isBlock;	// 0x24 (36)
	uint blockKind;	// 0x28 (40)
	uint blockMode;	// 0x2C (44)
	uint lexemCategory;	// 0x30 (48)
	uint lexemType;	// 0x34 (52)
};

class SyntaxItemInfos {
public:
	SyntaxItemInfosRef&& ref() const;
	uint self;
	uint refCount;	// 0x0 (0)
	Vector infos;	// 0x4 (4)
};

class BackColorsItem {
public:
	BackColorsItemRef&& ref() const;
	uint self;
	uint start;	// 0x0 (0)
	uint len;	// 0x4 (4)
	uint color;	// 0x8 (8)
};

class ITextExtBackColors {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	bool hasCustomBackground(uint nLineNo, SyntaxItemInfos& items);
	void getColorInfo(uint currentBGColor, SyntaxItemInfos& items, Vector& res);
};

class ITextExtColors {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void getColors(const v8string& sourceLine, Vector& items);
};

class ITextExtention {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	const Guid& guid();
	v8string name();
};

class TextPosition {
public:
	~TextPosition();
	TextPosition(const TextPosition&);
	TextPosition(int, int);
	TextPosition();
	TextPositionRef&& ref() const;
	uint self;
	void ctor(const TextPosition&);
	void ctor(int, int);
	void ctor();
	void dtor();
	bool isValid() const;
	TextPosition opSub(const TextPosition&);
	TextPosition& operator=(const TextPosition&);
	bool operator==(const TextPosition&) const;
	uint vtable;	// 0x0 (0)
	uint line;	// 0x4 (4)
	uint col;	// 0x8 (8)
};

class TextManager {
public:
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void virt_dtor();
	void onTextAreaModified(bool, const TextPosition&, const TextPosition&, const TextPosition&, const TextPosition&);
	void onSelectionRecalculateFinished();
	void onSetSelectRangeStop(const TextPosition&, const TextPosition&);
	void clearText();
	bool empty();
	int getLinesCount();
	uint getCashObject(IUnknown&&&);
	int getLineLength(int, bool);
	void getSelectRange(TextPosition&, TextPosition&);
	void setSelectRange(const TextPosition&, const TextPosition&);
	void setSelectRange(int, int, int, int);
	void clearTextSelection();
	bool save(v8string&);
	bool getLineFast(int, v8string&, IUnknown& cash);
	void setSelectText(uint, bool);
	void getTextArea(const TextPosition&, const TextPosition&, uint& result);
};

class LocalWString {
public:
	LocalWString();
	LocalWStringRef&& ref() const;
	uint self;
	void ctor();
	v8string getString(const v8string&) const;
};

class TypeDomainPattern {
public:
	~TypeDomainPattern();
	TypeDomainPattern(const Guid&);
	TypeDomainPattern(const TypeDomainPattern&);
	TypeDomainPattern(const Vector&);
	TypeDomainPattern();
	TypeDomainPatternRef&& ref() const;
	uint self;
	void dtor();
	void ctor(const Guid&);
	void _ctor(const Guid&);
	void _dtor();
	void ctor(const TypeDomainPattern&);
	void addType(const Guid&);
	int hash() const;
	bool isSubset(const TypeDomainPattern&) const;
	void merge(const TypeDomainPattern&);
	TypeDomainPattern& operator=(const TypeDomainPattern&);
	void ctor(const Vector&);
	void addTypes(const Vector&);
	bool containsType(const Guid&) const;
	uint types(Vector&) const;
	uint typesCount() const;
	void ctor();
	uint ptr;	// 0x0 (0)
};

class list_node {
public:
	list_nodeRef&& ref() const;
	uint self;
	uint p1;	// 0x0 (0)
	uint p2;	// 0x4 (4)
	uint p3;	// 0x8 (8)
	uint16 f;	// 0xC (12)
};

class TypeContextInfoItem {
public:
	TypeContextInfoItemRef&& ref() const;
	uint self;
	void init();
	v8string name;	// 0x0 (0)
	bool isMethod;	// 0x18 (24)
	bool haveRetVal;	// 0x19 (25)
	uint params;	// 0x1C (28)
	int from;	// 0x20 (32)
	TypeDomainPattern typeDomain;	// 0x24 (36)
	uint lst_0;	// 0x28 (40)
	uint lst_4;	// 0x2C (44)
	uint flag1;	// 0x30 (48)
	uint ip1;	// 0x34 (52)
	uint textPos_vt;	// 0x38 (56)
	uint flag0_1;	// 0x3C (60)
	uint flag0_2;	// 0x40 (64)
	Guid objectId;	// 0x44 (68)
	Guid mdPropId;	// 0x54 (84)
	bool isTypeSource;	// 0x64 (100)
	TypeDomainPattern providedTypeDomain;	// 0x68 (104)
	v8string str1;	// 0x6C (108)
	v8string str2;	// 0x84 (132)
	bool byte_0;	// 0x9C (156)
	Vector someVector;	// 0xA0 (160)
};

class ITypeContextInfo {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint count();
	void info(uint index, TypeContextInfoItem& item, int lang);
};

class TypeNameInfo {
public:
	TypeNameInfoRef&& ref() const;
	uint self;
	v8string name;	// 0x0 (0)
	Guid uuid;	// 0x18 (24)
};

class ITypeNameInfo {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint count();
	void info(uint idx, TypeNameInfo& item, int lang);
	const v8string& name(uint idx, int lang);
};

class ISettingsConsumer {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void setSettings(IUnknown&& value, const Guid& kind);
};

class IContextDef {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	IContext&& opCast();
	int propsCount();
	const uint16& propName(int prop, int lang);
	bool isPropReadable(int prop);
	bool isPropWritable(int prop);
	int findProp(const v8string& pszPropName);
	int methsCount();
	const uint16& methName(int meth, int lang);
	int paramsCount(int meth);
	bool isParamIn(int meth, int param);
	bool isParamOut(int meth, int param);
	bool getParamDefValue(int meth, int param, Value& defVal);
	bool hasRetVal(int meth);
	int findMethod(const v8string& methName);
};

class IContext {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	operator IContextDef&&();
	int propsCount();
	const uint16& propName(int prop, int lang);
	bool isPropReadable(int prop);
	bool isPropWritable(int prop);
	int findProp(const v8string& pszPropName);
	int methsCount();
	const uint16& methName(int meth, int lang);
	int paramsCount(int meth);
	bool isParamIn(int meth, int param);
	bool isParamOut(int meth, int param);
	bool getParamDefValue(int meth, int param, Value& defVal);
	bool hasRetVal(int meth);
	int findMethod(const v8string& methName);
	IContextDef&& staticContextDef();
	bool getPropVal(int prop, Value& value);
	bool setPropVal(int prop, const Value& value);
	bool callMeth(int meth, Value& pRetVal, Vector& params);
};

class IAssistantData {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint object(IUnknown&&&);
	IUnknown&& extObject();
	const Guid& propUuid();
};

class ContextValueInfo {
public:
	ContextValueInfoRef&& ref() const;
	uint self;
	void init();
	void done();
	v8string nameEng;	// 0x0 (0)
	v8string nameRus;	// 0x18 (24)
	TypeDomainPattern typeDomainPattern;	// 0x30 (48)
	bool isMutable;	// 0x34 (52)
	uint zero1;	// 0x38 (56)
	uint zero2;	// 0x3C (60)
	uint pZero1;	// 0x40 (64)
	uint pZero2;	// 0x44 (68)
	uint zero3;	// 0x48 (72)
};

class IContextDefExt {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	bool isCollection();
	void getCollectionItemInfo(ContextValueInfo& valueInfo);
	bool notIndexable(int nPropPos);
	void propInfo(int prop, ContextValueInfo& valueInfo);
	void methRetInfo(int meth, ContextValueInfo& valueInfo);
};

class IAssistListInfo {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint realIndex(uint idx, uint& realIdx, uint& p1);
	uint indexFromBkmk(IV8Bookmark& pBkmk);
};

class IAssistList {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint getDataSource(IV8DataSource&&&, ITextEditor& ted, int i10, IV8Bookmark&&& pBkmk, uint& itemsCount, int i1, int i2, int i3, int i4, int i5, int i6, int i7, int i8, int i9);
	void textByBookmark(IV8DataSource& ds, IV8Bookmark& bkmk, v8string& text, TextPosition& tpBegin, uint& caretPos, bool&);
};

class URL {
public:
	~URL();
	URL(const URL&);
	URL();
	URL(const v8string&, const v8string&, bool);
	URL(const v8string&, bool p = false);
	URLRef&& ref() const;
	uint self;
	void ctor(const URL&);
	void ctor();
	URL baseURL() const;
	URL getRelativeURL(const URL&) const;
	URL normalize() const;
	bool equal(const URL&, bool) const;
	URL implementCombine(const URL&, bool) const;
	void ctor(const v8string&, const v8string&, bool);
	void ctor(const v8string&, bool p = false);
	v8string part(int, int) const;
	v8string presentation() const;
	void dtor();
	v8string url;	// 0x0 (0)
	Vector vec;	// 0x18 (24)
	bool b1;	// 0x24 (36)
	bool b2;	// 0x25 (37)
};

class IType {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	int getTypeKind();
	const Guid& getClsid();
	uint16& getTypeString(int alias);
	void getString(v8string&);
	bool isComType();
	bool isMutable();
	void createValue(IValue&&&);
	bool hasCtor(uint);
	void create(IValue&&&, Vector&);
};

class IValue {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	IType&& getType();
	bool getBool(bool&);
	bool getNumeric(Numeric&);
	bool getString(v8string&);
	bool getDate(Date&);
	bool isEqual(IValue&);
};

class IEnumValCreator {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint create(Value& val, int eval);
	void getAll(Vector& vals);
};

class Date {
public:
	Date(int y = 0, int m = 0, int d = 0);
	Date(int, int, int, int, int, int);
	DateRef&& ref() const;
	uint self;
	void ctor(int y = 0, int m = 0, int d = 0);
	void ctor(int, int, int, int, int, int);
	v8string toString() const;
	uint64 ticks;	// 0x0 (0)
};

class Numeric {
public:
	~Numeric();
	Numeric(const Numeric&);
	Numeric(int16);
	Numeric(uint16);
	Numeric(int = 0);
	Numeric(uint);
	Numeric(double);
	Numeric(int64);
	Numeric(uint64);
	Numeric();
	NumericRef&& ref() const;
	uint self;
	void dtor();
	void ctor(const Numeric&);
	void ctor(int16);
	void ctor(uint16);
	void ctor(int = 0);
	void ctor(uint);
	void ctor(double);
	void ctor(int64);
	void ctor(uint64);
	Numeric abs() const;
	int compare(const Numeric&) const;
	Numeric floor() const;
	void lengthAndPrecision(uint& len, uint& prec) const;
	operator int64() const;
	operator double() const;
	operator int() const;
	Numeric& opModAssign(const Numeric&);
	Numeric& opMulAssign(const Numeric&);
	Numeric& operator+=(const Numeric&);
	Numeric opNeg() const;
	Numeric& opSubAssign(const Numeric&);
	Numeric& opDivAssign(const Numeric&);
	Numeric& operator=(const Numeric&);
	Numeric& pow(const Numeric&);
	Numeric round(int) const;
	Numeric round(int, int mode) const;
	int sign() const;
	bool toInteger(int64&) const;
	v8string toString() const;
	void ctor();
	uint allocked;	// 0x0 (0)
	uint length;	// 0x4 (4)
	uint prec;	// 0x8 (8)
	uint _sign;	// 0xC (12)
	uint data;	// 0x10 (16)
	uint inplace1;	// 0x14 (20)
	uint inplace2;	// 0x18 (24)
	uint inplace3;	// 0x1C (28)
	uint inplace4;	// 0x20 (32)
};

class Value {
public:
	~Value();
	Value(const Value&);
	Value(const Date&);
	Value(const Numeric&);
	Value(int16);
	Value(uint16);
	Value(int);
	Value(uint);
	Value(double);
	Value(IUnknown&&);
	Value(IValue&&);
	Value();
	Value(int64);
	Value(uint64);
	Value(bool);
	Value(const v8string&);
	ValueRef&& ref() const;
	uint self;
	void ctor(const Value&);
	void ctor(const Date&);
	void ctor(const Numeric&);
	void ctor(int16);
	void ctor(uint16);
	void ctor(int);
	void ctor(uint);
	void ctor(double);
	void ctor(IUnknown&&);
	void ctor(IValue&&);
	void ctor();
	void ctor(int64);
	void ctor(uint64);
	void ctor(bool);
	void dtor();
	Value& operator=(const Value&);
	Type type() const;
	void operator=(const Date&);
	void operator=(const Numeric&);
	void operator=(int16);
	void operator=(uint16);
	void operator=(int);
	void operator=(uint);
	void operator=(double);
	void operator=(IUnknown&&);
	void operator=(int64);
	void operator=(uint64);
	void operator=(bool);
	void clear();
	bool operator==(const Date&) const;
	bool operator==(const Numeric&) const;
	bool operator==(int16) const;
	bool operator==(uint16) const;
	bool operator==(int) const;
	bool operator==(uint) const;
	bool operator==(int64) const;
	bool operator==(uint64) const;
	bool operator==(bool) const;
	bool getBoolean(bool&) const;
	bool getDate(Date&) const;
	bool getNumeric(Numeric&) const;
	void ctor(const v8string&);
	void operator=(const v8string&);
	void operator=(const uint16&);
	bool operator==(const v8string&) const;
	bool operator==(const uint16&) const;
	bool getString(v8string&) const;
	void toString(v8string&) const;
	uint vtable;	// 0x0 (0)
	IValue&& pValue;	// 0x4 (4)
};

class Type {
public:
	~Type();
	Type();
	Type(const Guid&);
	Type(const Type&);
	Type(IType&&);
	Type(IType&&, bool);
	Type(int);
	Type(const v8string&);
	TypeRef&& ref() const;
	uint self;
	void ctor();
	void ctor(const Guid&);
	void ctor(const Type&);
	void ctor(IType&&);
	void ctor(IType&&, bool);
	void ctor(int);
	void dtor();
	Type& operator=(const Type&);
	void ctor(const v8string&);
	IType&& pType;	// 0x0 (0)
};

class IIndexedCollectionRO {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	IIndexedCollectionFS&& opCast();
	uint count();
	uint at(Value& val, uint idx);
};

class IIndexedCollectionFS {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	operator IIndexedCollectionRO&&();
	IValueArray&& opCast();
	uint count();
	uint at(Value& val, uint idx);
	void setAt(uint idx, const Value& value);
};

class IValueArray {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	operator IIndexedCollectionFS&&();
	uint count();
	uint at(Value& val, uint idx);
	void setAt(uint idx, const Value& value);
	void setCount(uint count);
	void insertAt(uint idx, const Value& value);
	void remove(uint idx);
};

class IVTColumnRO {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	IVTColumn&& opCast();
	const int& id();
	uint index();
	uint name(int alias);
	uint type(TypeDomainPattern&);
	v8string title();
	uint width();
	bool colInfo(VTColumnInfo& info);
};

class IVTColumn {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	operator IVTColumnRO&&();
	const int& id();
	uint index();
	uint name(int alias);
	uint type(TypeDomainPattern&);
	v8string title();
	uint width();
	bool colInfo(VTColumnInfo& info);
	void setName(const v8string& name);
	void setType(const TypeDomainPattern& type);
	void setTitle(const v8string& title);
	void setWidth(uint width);
	void setColumnInfo(const VTColumnInfo& info);
};

class IVTRowRO {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	IVTRow&& opCast();
	uint index();
	uint columnCount();
};

class IVTRow {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	operator IVTRowRO&&();
	IValueTreeRow&& opCast();
	uint index();
	uint columnCount();
	bool setValue(const int& columnId, const Value& value);
	bool setValueAt(uint column, const Value& value);
	void load(IVTRowRO&& src);
};

class IValueTableBaseRO {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	IValueTableBase&& opCast();
	uint columnCount();
};

class IValueTableBase {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	operator IValueTableBaseRO&&();
	IValueTableColumns&& opCast();
	IValueSubTree&& opCast();
	uint columnCount();
	void setRowCount(uint count);
	uint addRow(IVTRowRO&&&);
	uint insertRow(IVTRowRO&&, uint index);
	void deleteRow(uint index);
	void deleteRows();
	void moveRow(uint index, int offset);
	bool setValue(uint row, const int& id, const Value& value);
	bool setValueAt(uint row, uint column, const Value& value);
};

class IValueTableColumns {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	operator IValueTableBase&&();
	IValueTable&& opCast();
	IValueTree&& opCast();
	uint columnCount();
	void setRowCount(uint count);
	uint addRow(IVTRowRO&&&);
	uint insertRow(IVTRowRO&&, uint index);
	void deleteRow(uint index);
	void deleteRows();
	void moveRow(uint index, int offset);
	bool setValue(uint row, const int& id, const Value& value);
	bool setValueAt(uint row, uint column, const Value& value);
	void setColumnCount(uint count);
	uint addColumn(IVTColumnRO&&&, const VTColumnInfo& info, const int& id);
	uint insertColumn(IVTColumnRO&&&, uint index, const VTColumnInfo& info, const int& id);
};

class IValueTable {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	operator IValueTableColumns&&();
	uint columnCount();
	void setRowCount(uint count);
	uint addRow(IVTRowRO&&&);
	uint insertRow(IVTRowRO&&, uint index);
	void deleteRow(uint index);
	void deleteRows();
	void moveRow(uint index, int offset);
	bool setValue(uint row, const int& id, const Value& value);
	bool setValueAt(uint row, uint column, const Value& value);
	void setColumnCount(uint count);
	uint addColumn(IVTColumnRO&&&, const VTColumnInfo& info, const int& id);
	uint insertColumn(IVTColumnRO&&&, uint index, const VTColumnInfo& info, const int& id);
	void f();
};

class IValueSubTree {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	operator IValueTableBase&&();
	uint columnCount();
	void setRowCount(uint count);
	uint addRow(IVTRowRO&&&);
	uint insertRow(IVTRowRO&&, uint index);
	void deleteRow(uint index);
	void deleteRows();
	void moveRow(uint index, int offset);
	bool setValue(uint row, const int& id, const Value& value);
	bool setValueAt(uint row, uint column, const Value& value);
	uint parentRow(IVTRowRO&&&);
};

class IValueTreeRow {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	operator IVTRow&&();
	uint index();
	uint columnCount();
	bool setValue(const int& columnId, const Value& value);
	bool setValueAt(uint column, const Value& value);
	void load(IVTRowRO&& src);
	uint parentRow(IValueTreeRow&&&);
	uint parentTree(IValueTableBaseRO&&&);
	bool hasChild();
	uint subTree(IValueSubTree&&&);
	uint level();
};

class IValueTree {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	operator IValueTableColumns&&();
	uint columnCount();
	void setRowCount(uint count);
	uint addRow(IVTRowRO&&&);
	uint insertRow(IVTRowRO&&, uint index);
	void deleteRow(uint index);
	void deleteRows();
	void moveRow(uint index, int offset);
	bool setValue(uint row, const int& id, const Value& value);
	bool setValueAt(uint row, uint column, const Value& value);
	void setColumnCount(uint count);
	uint addColumn(IVTColumnRO&&&, const VTColumnInfo& info, const int& id);
	uint insertColumn(IVTColumnRO&&&, uint index, const VTColumnInfo& info, const int& id);
	void f();
};

class VTColumnInfo {
public:
	~VTColumnInfo();
	VTColumnInfo();
	VTColumnInfoRef&& ref() const;
	uint self;
	void ctor();
	void dtor();
	v8string name1;	// 0x0 (0)
	v8string name2;	// 0x18 (24)
	TypeDomainPattern type;	// 0x30 (48)
	v8string title;	// 0x34 (52)
	uint width;	// 0x4C (76)
};

class StructKeys {
public:
	StructKeysRef&& ref() const;
	uint self;
	uint key1;	// 0x0 (0)
	uint key2;	// 0x4 (4)
};

class IValueStructure {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint count();
	bool find(const StructKeys& key, Value& val);
	bool set(const v8string& key, const Value& val);
};

class IView {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	IWindowView&& opCast();
	void drawView(uint dc, const Rect& rect, const Rect& updateRect);
	bool setViewEnable(bool enable);
	bool isViewEnable();
	Size getViewExtent();
};

class IWindowView {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	operator IView&&();
	void drawView(uint dc, const Rect& rect, const Rect& updateRect);
	bool setViewEnable(bool enable);
	bool isViewEnable();
	Size getViewExtent();
	bool createWindow(uint parentWindow);
	void destroyWindow();
	bool showWindow(bool show);
	bool isWindowVisible();
	void moveAfter(uint wnd);
	void invalidateRect(const Rect& rect, bool eraseBkgnd = true);
	uint hwnd();
	void windowRect(Rect& rect);
	uint getWindowBackgroundColor();
};

class IFramedView {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	IDocumentView&& opCast();
	void setID(const Guid& id);
	const Guid& _getID();
	CloseAction closeAction();
	void localFrame(WndType type, Guid& id, uint& style);
	v8string title();
	uint icon(IUnknown&&&);
	void onActivate(ActivateType action, IFramedView&& otherView);
	void setViewFocus();
	bool onInitialUpdate();
	void onFinalOpen();
	void onFinalClose();
	void onCancelClose();
	bool canCloseView();
	void onShow(bool show);
	int mdiType();
	void getID(Guid& guid);
};

class IDocumentView {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	operator IFramedView&&();
	void setID(const Guid& id);
	const Guid& _getID();
	CloseAction closeAction();
	void localFrame(WndType type, Guid& id, uint& style);
	v8string title();
	uint icon(IUnknown&&&);
	void onActivate(ActivateType action, IFramedView&& otherView);
	void setViewFocus();
	bool onInitialUpdate();
	void onFinalOpen();
	void onFinalClose();
	void onCancelClose();
	bool canCloseView();
	void onShow(bool show);
	int mdiType();
	uint document(IDocument&&&);
};

class ITopLevelFrame {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void init(const v8string& title, uint icon, uint parent, const Rect& rect, int nCmdShow);
	bool close(bool testAbility = false);
	bool canClose();
	void cancelClose();
	int frameType();
	bool closeView(const Guid& id, bool b = false);
	uint getView(IFramedView&&&, const Guid& id);
	void activateView(const Guid& id);
	bool showView(const Guid& id, bool show);
	bool isViewVisible(const Guid& id);
	void enumAllViews(Vector& views);
	uint getCoreTopLevelFrame(ITopLevelFrame&&&);
	uint getShellTopLevelFrame(ITopLevelFrame&&&);
	v8string getCaption();
	v8string getTitle();
	void setTitle(const v8string& str);
	void setAdditionalTitle(const v8string& str);
	v8string getAdditionalTitle();
	uint commandReceiver(ICommandReceiver&&&);
};

class IWindow {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	bool createWindow(uint parent, const Rect& rect, bool visible);
	void destroyWindow();
	uint hwnd();
};

class ITopLevelFrameCore {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void f();
};

class IContainedObject {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void setSite(IClientSite&& site);
	IClientSite&& getSite();
};

class IClientSite {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	IContainer&& getContainer();
};

class IContainer {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint objectsCount();
	IContainedObject&& getObject(uint index);
};

class IFramedViewSite {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void split(IFramedView&& other, ViewPlacements place, bool outside, int tabPos, int t = 0);
	bool canSplit();
	void getViewPosition(ViewPosition& vp);
};

class IViewContext {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	const Guid& _getID();
	void getID(Guid& guid);
};

class IViewLayouter {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void enumAllChilds(ViewContextList& childs, bool b = false);
	IFramedView&& activeView();
	uint activeTarget(ICommandTarget&&&);
};

class ITabbedLayouter {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint pagesCount();
	IFramedView&& page(uint idx);
};

class IViewSplitter {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	IFramedView&& first();
	IFramedView&& second();
	bool isHorizontal();
};

class IMDIClient {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	uint childrensCount();
	IViewContext&& viewByIdx(uint index);
	Vector childsIds;	// 0x18 (24)
};

class IFormViewCore {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	bool updateData(bool save, int controlId);
	void endDialog(int result);
	void setFormSize(const Size& size, bool inDLU = true);
};

class ViewContextListNode {
public:
	ViewContextListNodeRef&& ref() const;
	uint self;
	uint next;	// 0x0 (0)
	uint prev;	// 0x4 (4)
	IViewContext&& view;	// 0x8 (8)
};

class ViewContextList {
public:
	ViewContextListRef&& ref() const;
	uint self;
	uint head;	// 0x0 (0)
	uint end;	// 0x4 (4)
};

class ViewPosition {
public:
	ViewPosition();
	ViewPositionRef&& ref() const;
	uint self;
	void ctor();
	ViewStates state;	// 0x0 (0)
	int unk1;	// 0x4 (4)
	bool unk2;	// 0x8 (8)
	ViewPlacements area;	// 0xC (12)
	int dockLine;	// 0x10 (16)
	int dockOffset;	// 0x14 (20)
	Size dockSize;	// 0x18 (24)
	bool canSplit;	// 0x20 (32)
	Rect floatRect;	// 0x24 (36)
	Rect MDI_Rect;	// 0x34 (52)
	bool MDI_maxed;	// 0x44 (68)
	Size autoHideSize;	// 0x48 (72)
	int stateAbility;	// 0x50 (80)
	int areaAbility;	// 0x54 (84)
	bool splitAbility;	// 0x58 (88)
	v8string MDI_ViewData;	// 0x5C (92)
	v8string floatViewData;	// 0x74 (116)
	v8string dockViewData;	// 0x8C (140)
	v8string autoHideViewData;	// 0xA4 (164)
	bool center;	// 0xBC (188)
	bool unk3;	// 0xBD (189)
	Rect unk4;	// 0xC0 (192)
	uint unk5;	// 0xD0 (208)
	Size unk6;	// 0xD4 (212)
	bool unk7;	// 0xDC (220)
};

class ViewContext {
public:
	ViewContextRef&& ref() const;
	uint self;
	Guid id;	// 0x0 (0)
	ViewPosition vpCurrent;	// 0x30 (48)
	ViewPosition vpOriginal;	// 0x11C (284)
	Size sizeOriginal;	// 0x1FC (508)
	IUnknown&& parent;	// 0x204 (516)
};

class tagRECT {
public:
	tagRECTRef&& ref() const;
	uint self;
	int left;	// 0x0 (0)
	int top;	// 0x4 (4)
	int right;	// 0x8 (8)
	int bottom;	// 0xC (12)
};

class Window {
public:
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint self;
	IUnknown& unk;
	void GetClientRect(tagRECT&);
	void GetWindowRect(tagRECT&);
	uint getClientRectWithoutScrollers(Rect&);
	int getScrollerHeight();
	int getScrollerWidth();
	uint getNCSize(Size&);
	void clientToWindow(Point&);
	void clientToWindow(Rect&);
	void windowToClient(Point&);
	void windowToClient(Rect&);
	uint calcShadowRect(Rect&);
	uint calcInBorderRect(Rect&, Rect&);
	void getWindowRects(Rect& windowRect, Rect& withoutScrollers, Rect& clientArea);
	uint calcWindowTopRightPos(Rect&, IWindow&, IWindow&, int, int);
	int SetCaretPos(int, int);
};

class mbpRef {
public:
	uint self;
	int operator<(uint);
	int operator<(mbpRef&&);
	mbpRef&& operator+(uint) const;
	mbp ref;	// 0x0 (0)
};

class SelectFileNameRef {
public:
	uint self;
	int operator<(uint);
	int operator<(SelectFileNameRef&&);
	SelectFileNameRef&& operator+(uint) const;
	SelectFileName ref;	// 0x0 (0)
};

class CommandIDRef {
public:
	uint self;
	int operator<(uint);
	int operator<(CommandIDRef&&);
	CommandIDRef&& operator+(uint) const;
	CommandID ref;	// 0x0 (0)
};

class CommandRef {
public:
	uint self;
	int operator<(uint);
	int operator<(CommandRef&&);
	CommandRef&& operator+(uint) const;
	Command ref;	// 0x0 (0)
};

class KeyAccelRef {
public:
	uint self;
	int operator<(uint);
	int operator<(KeyAccelRef&&);
	KeyAccelRef&& operator+(uint) const;
	KeyAccel ref;	// 0x0 (0)
};

class CompositeIDRef {
public:
	uint self;
	int operator<(uint);
	int operator<(CompositeIDRef&&);
	CompositeIDRef&& operator+(uint) const;
	CompositeID ref;	// 0x0 (0)
};

class LineInfoRef {
public:
	uint self;
	int operator<(uint);
	int operator<(LineInfoRef&&);
	LineInfoRef&& operator+(uint) const;
	LineInfo ref;	// 0x0 (0)
};

class ImageInfoRef {
public:
	uint self;
	int operator<(uint);
	int operator<(ImageInfoRef&&);
	ImageInfoRef&& operator+(uint) const;
	ImageInfo ref;	// 0x0 (0)
};

class CellFormatRef {
public:
	uint self;
	int operator<(uint);
	int operator<(CellFormatRef&&);
	CellFormatRef&& operator+(uint) const;
	CellFormat ref;	// 0x0 (0)
};

class DocSinkRef {
public:
	uint self;
	int operator<(uint);
	int operator<(DocSinkRef&&);
	DocSinkRef&& operator+(uint) const;
	DocSink ref;	// 0x0 (0)
};

class StorageFileInfoRef {
public:
	uint self;
	int operator<(uint);
	int operator<(StorageFileInfoRef&&);
	StorageFileInfoRef&& operator+(uint) const;
	StorageFileInfo ref;	// 0x0 (0)
};

class FileExceptionRef {
public:
	uint self;
	int operator<(uint);
	int operator<(FileExceptionRef&&);
	FileExceptionRef&& operator+(uint) const;
	FileException ref;	// 0x0 (0)
};

class FontRef {
public:
	uint self;
	int operator<(uint);
	int operator<(FontRef&&);
	FontRef&& operator+(uint) const;
	Font ref;	// 0x0 (0)
};

class MDPropertyRef {
public:
	uint self;
	int operator<(uint);
	int operator<(MDPropertyRef&&);
	MDPropertyRef&& operator+(uint) const;
	MDProperty ref;	// 0x0 (0)
};

class FieldInfoRef {
public:
	uint self;
	int operator<(uint);
	int operator<(FieldInfoRef&&);
	FieldInfoRef&& operator+(uint) const;
	FieldInfo ref;	// 0x0 (0)
};

class MDEventInfoRef {
public:
	uint self;
	int operator<(uint);
	int operator<(MDEventInfoRef&&);
	MDEventInfoRef&& operator+(uint) const;
	MDEventInfo ref;	// 0x0 (0)
};

class TypeInfoRef {
public:
	uint self;
	int operator<(uint);
	int operator<(TypeInfoRef&&);
	TypeInfoRef&& operator+(uint) const;
	TypeInfo ref;	// 0x0 (0)
};

class MDTreeItemInfoRef {
public:
	uint self;
	int operator<(uint);
	int operator<(MDTreeItemInfoRef&&);
	MDTreeItemInfoRef&& operator+(uint) const;
	MDTreeItemInfo ref;	// 0x0 (0)
};

class V8PictureRef {
public:
	uint self;
	int operator<(uint);
	int operator<(V8PictureRef&&);
	V8PictureRef&& operator+(uint) const;
	V8Picture ref;	// 0x0 (0)
};

class GlyphRef {
public:
	uint self;
	int operator<(uint);
	int operator<(GlyphRef&&);
	GlyphRef&& operator+(uint) const;
	Glyph ref;	// 0x0 (0)
};

class ExceptionRef {
public:
	uint self;
	int operator<(uint);
	int operator<(ExceptionRef&&);
	ExceptionRef&& operator+(uint) const;
	Exception ref;	// 0x0 (0)
};

class Sci_CharacterRangeRef {
public:
	uint self;
	int operator<(uint);
	int operator<(Sci_CharacterRangeRef&&);
	Sci_CharacterRangeRef&& operator+(uint) const;
	Sci_CharacterRange ref;	// 0x0 (0)
};

class Sci_TextRangeRef {
public:
	uint self;
	int operator<(uint);
	int operator<(Sci_TextRangeRef&&);
	Sci_TextRangeRef&& operator+(uint) const;
	Sci_TextRange ref;	// 0x0 (0)
};

class Sci_TextToFindRef {
public:
	uint self;
	int operator<(uint);
	int operator<(Sci_TextToFindRef&&);
	Sci_TextToFindRef&& operator+(uint) const;
	Sci_TextToFind ref;	// 0x0 (0)
};

class Sci_RectangleRef {
public:
	uint self;
	int operator<(uint);
	int operator<(Sci_RectangleRef&&);
	Sci_RectangleRef&& operator+(uint) const;
	Sci_Rectangle ref;	// 0x0 (0)
};

class Sci_NotifyHeaderRef {
public:
	uint self;
	int operator<(uint);
	int operator<(Sci_NotifyHeaderRef&&);
	Sci_NotifyHeaderRef&& operator+(uint) const;
	Sci_NotifyHeader ref;	// 0x0 (0)
};

class SCNotificationRef {
public:
	uint self;
	int operator<(uint);
	int operator<(SCNotificationRef&&);
	SCNotificationRef&& operator+(uint) const;
	SCNotification ref;	// 0x0 (0)
};

class VectorRef {
public:
	uint self;
	int operator<(uint);
	int operator<(VectorRef&&);
	VectorRef&& operator+(uint) const;
	Vector ref;	// 0x0 (0)
};

class v8strDataRef {
public:
	uint self;
	int operator<(uint);
	int operator<(v8strDataRef&&);
	v8strDataRef&& operator+(uint) const;
	v8strData ref;	// 0x0 (0)
};

class v8stringRef {
public:
	uint self;
	int operator<(uint);
	int operator<(v8stringRef&&);
	v8stringRef&& operator+(uint) const;
	v8string ref;	// 0x0 (0)
};

class ColorRef {
public:
	uint self;
	int operator<(uint);
	int operator<(ColorRef&&);
	ColorRef&& operator+(uint) const;
	Color ref;	// 0x0 (0)
};

class SyntaxItemInfoRef {
public:
	uint self;
	int operator<(uint);
	int operator<(SyntaxItemInfoRef&&);
	SyntaxItemInfoRef&& operator+(uint) const;
	SyntaxItemInfo ref;	// 0x0 (0)
};

class SyntaxItemInfosRef {
public:
	uint self;
	int operator<(uint);
	int operator<(SyntaxItemInfosRef&&);
	SyntaxItemInfosRef&& operator+(uint) const;
	SyntaxItemInfos ref;	// 0x0 (0)
};

class BackColorsItemRef {
public:
	uint self;
	int operator<(uint);
	int operator<(BackColorsItemRef&&);
	BackColorsItemRef&& operator+(uint) const;
	BackColorsItem ref;	// 0x0 (0)
};

class TextPositionRef {
public:
	uint self;
	int operator<(uint);
	int operator<(TextPositionRef&&);
	TextPositionRef&& operator+(uint) const;
	TextPosition ref;	// 0x0 (0)
};

class LocalWStringRef {
public:
	uint self;
	int operator<(uint);
	int operator<(LocalWStringRef&&);
	LocalWStringRef&& operator+(uint) const;
	LocalWString ref;	// 0x0 (0)
};

class TypeDomainPatternRef {
public:
	uint self;
	int operator<(uint);
	int operator<(TypeDomainPatternRef&&);
	TypeDomainPatternRef&& operator+(uint) const;
	TypeDomainPattern ref;	// 0x0 (0)
};

class list_nodeRef {
public:
	uint self;
	int operator<(uint);
	int operator<(list_nodeRef&&);
	list_nodeRef&& operator+(uint) const;
	list_node ref;	// 0x0 (0)
};

class TypeContextInfoItemRef {
public:
	uint self;
	int operator<(uint);
	int operator<(TypeContextInfoItemRef&&);
	TypeContextInfoItemRef&& operator+(uint) const;
	TypeContextInfoItem ref;	// 0x0 (0)
};

class TypeNameInfoRef {
public:
	uint self;
	int operator<(uint);
	int operator<(TypeNameInfoRef&&);
	TypeNameInfoRef&& operator+(uint) const;
	TypeNameInfo ref;	// 0x0 (0)
};

class ContextValueInfoRef {
public:
	uint self;
	int operator<(uint);
	int operator<(ContextValueInfoRef&&);
	ContextValueInfoRef&& operator+(uint) const;
	ContextValueInfo ref;	// 0x0 (0)
};

class URLRef {
public:
	uint self;
	int operator<(uint);
	int operator<(URLRef&&);
	URLRef&& operator+(uint) const;
	URL ref;	// 0x0 (0)
};

class DateRef {
public:
	uint self;
	int operator<(uint);
	int operator<(DateRef&&);
	DateRef&& operator+(uint) const;
	Date ref;	// 0x0 (0)
};

class NumericRef {
public:
	uint self;
	int operator<(uint);
	int operator<(NumericRef&&);
	NumericRef&& operator+(uint) const;
	Numeric ref;	// 0x0 (0)
};

class ValueRef {
public:
	uint self;
	int operator<(uint);
	int operator<(ValueRef&&);
	ValueRef&& operator+(uint) const;
	Value ref;	// 0x0 (0)
};

class TypeRef {
public:
	uint self;
	int operator<(uint);
	int operator<(TypeRef&&);
	TypeRef&& operator+(uint) const;
	Type ref;	// 0x0 (0)
};

class VTColumnInfoRef {
public:
	uint self;
	int operator<(uint);
	int operator<(VTColumnInfoRef&&);
	VTColumnInfoRef&& operator+(uint) const;
	VTColumnInfo ref;	// 0x0 (0)
};

class StructKeysRef {
public:
	uint self;
	int operator<(uint);
	int operator<(StructKeysRef&&);
	StructKeysRef&& operator+(uint) const;
	StructKeys ref;	// 0x0 (0)
};

class ViewContextListNodeRef {
public:
	uint self;
	int operator<(uint);
	int operator<(ViewContextListNodeRef&&);
	ViewContextListNodeRef&& operator+(uint) const;
	ViewContextListNode ref;	// 0x0 (0)
};

class ViewContextListRef {
public:
	uint self;
	int operator<(uint);
	int operator<(ViewContextListRef&&);
	ViewContextListRef&& operator+(uint) const;
	ViewContextList ref;	// 0x0 (0)
};

class ViewPositionRef {
public:
	uint self;
	int operator<(uint);
	int operator<(ViewPositionRef&&);
	ViewPositionRef&& operator+(uint) const;
	ViewPosition ref;	// 0x0 (0)
};

class ViewContextRef {
public:
	uint self;
	int operator<(uint);
	int operator<(ViewContextRef&&);
	ViewContextRef&& operator+(uint) const;
	ViewContext ref;	// 0x0 (0)
};

class tagRECTRef {
public:
	uint self;
	int operator<(uint);
	int operator<(tagRECTRef&&);
	tagRECTRef&& operator+(uint) const;
	tagRECT ref;	// 0x0 (0)
};


// Globals funcs
void dumpVtable(?&, const string& alias = "");
bool checkInterface(?&);

namespace mem {
uint8 byte;
void set_byte(uint, uint8);
uint16 word;
void set_word(uint, uint16);
uint dword;
void set_dword(uint, uint);
uint64 qword;
void set_qword(uint, uint64);
uint size_t;
void set_size_t(uint, uint);
uint int_ptr;
void set_int_ptr(uint, uint);
float real;
void set_real(uint, float);
double dreal;
void set_dreal(uint, double);
uint addressOf(?&);
void memcpy(uint, uint, uint);
void memmove(uint, uint, uint);
void memset(uint, int, uint);
int interlockedIncr(uint address);
int interlockedDecr(uint address);
int interlockedExchangeAdd(uint address, int value);
int64 interlockedExchangeAdd64(uint address, int64 value);
uint malloc(uint size);
void free(uint ptr);

} // namespace mem
string join(const array<string>& strings, const string& delimeter, bool tail = false);
string formatInt(int64, const string& fmt = "", uint width = 0);
string formatFloat(double, const string& fmt, uint width, uint prec);
int64 parseInt(const string& val);
double parseFloat(const string& val);
string stringFromAddress(uint ptr, uint len = uint ( - 1 ));
string format(const string& pattern, const array<any>& args);
void Print(const string& message);
void Out(const string& message);
void initFuncDefFromAddress(uint address, ?& f, int callDecl = asCALL_CDECL);
void doLog(const string& message, uint logLevel = 2);
IUnknown&& toIUnknown(uint);
IDispatch&& toIDispatch(uint);
IConnectionPointContainer&& toIConnectionPointContainer(uint);
GuidRef&& toGuid(uint);
TYPEATTRRef&& toTYPEATTR(uint);
FUNCDESCRef&& toFUNCDESC(uint);
SqliteTransactionGuardRef&& toSqliteTransactionGuard(uint);
LOGFONTRef&& toLOGFONT(uint);
MONITORINFORef&& toMONITORINFO(uint);
MSGRef&& toMSG(uint);
RectRef&& toRect(uint);
PointRef&& toPoint(uint);
SizeRef&& toSize(uint);
MINMAXINFORef&& toMINMAXINFO(uint);
FILETIMERef&& toFILETIME(uint);
WIN32_FIND_DATARef&& toWIN32_FIND_DATA(uint);
uint SysAllocString(const uint16&);
void SysFreeString(uint);
int sqlite3_open(uint name, uint& db);
int sqlite3_open_v2(uint name, uint& db, int flags, uint vfs = 0);
int sqlite3_close(uint db);
int sqlite3_close_v2(uint db);
int sqlite3_errcode(uint db);
int sqlite3_extended_errcode(uint db);
uint sqlite3_errmsg16(uint db);
int sqlite3_exec(uint db, uint utf8text, uint cb = 0, uint cbarg = 0, uint& errmsg);
int sqlite3_prepare16_v2(uint db, uint zSql, int nByte, uint& stmt, uint& pzTail);
uint sqlite3_db_handle(uint stmt);
int sqlite3_step(uint stmt);
int sqlite3_reset(uint stmt);
int sqlite3_finalize(uint stmt);
int sqlite3_changes(uint db);
int sqlite3_total_changes(uint db);
int64 sqlite3_last_insert_rowid(uint db);
int sqlite3_column_count(uint stmt);
uint sqlite3_column_name16(uint stmt, int nColumn);
uint sqlite3_column_blob(uint stmt, int iCol);
int sqlite3_column_bytes(uint stmt, int iCol);
int sqlite3_column_bytes16(uint stmt, int iCol);
double sqlite3_column_double(uint stmt, int iCol);
int sqlite3_column_int(uint stmt, int iCol);
int64 sqlite3_column_int64(uint stmt, int iCol);
uint8& sqlite3_column_text(uint stmt, int iCol);
uint16& sqlite3_column_text16(uint stmt, int iCol);
int sqlite3_column_type(uint stmt, int iCol);
int sqlite3_clear_bindings(uint stmt);
int sqlite3_bind_parameter_count(uint stmt);
int sqlite3_bind_parameter_index(uint stmt, uint utf8Name);
uint sqlite3_bind_parameter_name(uint stmt, int);
int sqlite3_bind_blob(uint stmt, int, uint data, int n, int destr = SQLITE_TRANSIENT);
int sqlite3_bind_double(uint stmt, int, double);
int sqlite3_bind_int(uint stmt, int, int);
int sqlite3_bind_int64(uint stmt, int, int64);
int sqlite3_bind_null(uint stmt, int);
int sqlite3_bind_text(uint stmt, int, uint text, int nLen, int destr = SQLITE_TRANSIEN);
int sqlite3_bind_text16(uint stmt, int, uint text, int nLen, int destr = SQLITE_TRANSIEN);
int SetWindowText(uint, uint);
int GetWindowTextLength(uint hWnd);
int GetWindowText(uint hWnd, uint lpString, int nMaxCount);
void keybd_event(uint8 bVk, uint8 bScan, uint dwFlags, uint dwExtraInfo);
uint MapVirtualKey(uint uCode, uint uMapType);
uint SetFocus(uint hWnd);
uint GetFocus();
uint SendMessage(uint, uint, uint = 0, uint = 0);
int PostMessage(uint, uint, uint = 0, uint = 0);
int DestroyWindow(uint hWnd);
int ShowWindow(uint hWnd, int nCmdShow);
int UpdateWindow(uint hWnd);
uint16 GetKeyState(int nVirtKey);
int SetWindowPos(uint hWnd, uint hWndInsertAfter, int X, int Y, int cx, int cy, uint uFlags);
uint GetDC(uint hWnd);
int GetCaretPos(Point& lpPoint);
uint GetDesktopWindow();
int ReleaseDC(uint hWnd, uint hDC);
int GetSystemMetrics(int nIndex);
int ClientToScreen(uint hWnd, Point& lpPoint);
int ScreenToClient(uint hWnd, Point& lpPoint);
int CreateCaret(uint hWnd, uint hBitmap, int nWidth, int nHeight);
int SetCaretPos(int X, int Y);
int ShowCaret(uint hWnd);
int DestroyCaret();
int GetClassName(uint hWnd, uint lpClassName, int nMaxCount);
uint FindWindow(uint lpClassName, uint lpWindowName);
int IsWindowVisible(uint hWnd);
int IsWindow(uint hWnd);
int PeekMessage(MSG& lpMsg, uint hWnd, uint wMsgFilterMin, uint wMsgFilterMax, uint wRemoveMsg);
uint DialogBoxIndirectParam(uint hInstance, uint hDialogTemplate, uint hWndParent, uint lpDialogFunc, uint dwInitParam);
int EndDialog(uint hDlg, uint nResult);
int GetWindowRect(uint hWnd, Rect& lpRect);
uint CreateWindowEx(uint dwExStyle, uint lpClassName, uint lpWindowName, uint dwStyle, int X, int Y, int nWidth, int nHeight, uint hWndParent, uint hMenu, uint hInstance, uint lpParam);
int MoveWindow(uint hWnd, int X, int Y, int nWidth, int nHeight, int bRepaint);
int GetClientRect(uint hWnd, Rect& lpRect);
int AdjustWindowRectEx(Rect& lpRect, uint dwStyle, int bMenu, uint dwExStyle);
int GetWindowLong(uint hWnd, int nIndex);
int DefWindowProc(uint hWnd, uint msg, int wParam, int lParam);
int TranslateMessage(MSG& lpMsg);
uint CreateFontIndirect(LOGFONT& lplf);
uint SelectObject(uint hdc, uint h);
int GetTextExtentPoint32(uint hdc, uint lpString, int c, Size&);
int DeleteObject(uint ho);
int GetDeviceCaps(uint hdc, int index);
uint GetStockObject(int i);
int GetObjectW(uint h, uint c, uint pv);
int EnumFontFamiliesEx(uint hdc, LOGFONT& lpLogfont, uint lpProc, NoCaseMap<int>&, uint dwFlags);
void Sleep(uint);
uint GetTickCount();
int VirtualProtect(uint address, uint size, uint newProtect, uint& oldProtect);
int MultiByteToWideChar(uint CodePage, uint dwFlags, uint lpMultiByteStr, int cbMultiByte, uint lpWideCharStr, int cchWideChar);
int WideCharToMultiByte(uint CodePage, uint dwFlags, uint lpWideCharStr, int cchWideChar, uint lpMultiByteStr, int cbMultiByte, uint lpDefaultChar, bool& lpUsedDefaultChar);
uint GetCommandLine();
uint ExpandEnvironmentStrings(uint lpSrc, uint buffer, uint nSize);
uint GetTempPath(uint nBufferLength, uint lpBuffer);
int CreateDirectory(uint lpPathName, uint = 0);
uint LoadLibraryEx(uint lpLibFileName, uint = 0, uint dwFlags = 0);
uint GetProcAddress(uint hModule, uint lpProcName);
void DebugBreak();
uint GetModuleHandle(uint lpModuleName);
uint GetLastError();
uint GetFileAttributes(uint path);
uint FindFirstFile(uint path, uint lpFindFileData);
int FindNextFile(uint hFindFile, uint lpFindFileData);
int FindClose(uint hFindFile);
uint CreateFile(uint lpFileName, uint dwDesiredAccess, uint dwShareMode, uint lpSecurityAttributes, uint dwCreationDisposition, uint dwFlagsAndAttributes, uint hTemplateFile);
uint GetFileSize(uint hFile, uint lpFileSizeHigh = 0);
int ReadFile(uint hFile, uint lpBuffer, uint nNumberOfBytesToRead, uint lpNumberOfBytesRead = 0, uint lpOverlapped = 0);
int WriteFile(uint hFile, uint lpBuffer, uint nNumberOfBytesToWrite, uint lpNumberOfBytesWritten = 0, uint lpOverlapped = 0);
int CloseHandle(uint hObject);
void ExitProcess(uint uExitCode);
int TerminateProcess(uint hProcess, uint uExitCode);
uint GetCurrentProcess();
IDispatch&& createDispatchFromAS(?&);
IDispatch&& getEnumsDispatch();
void setComException(const string& description);
IUnknown&& AStoIUnknown(?&, const Guid&);
uint ThunkToFunc(?&, int callType = asCALL_STDCALL);
void initActiveScriptSubsystem(uint hMainWindow, const string& nameOfInstance);
void unloadDelayedScripts();
string findFullPath(const string& path);
string getEngineNameByFileExt(const string& ext);
ASWnd&& attachWndToFunction(uint hWnd, WndFunc&& handler, const array<uint>& messages);
void sortItemsArray(?& itemsArray, bool asc);
void screenGeometry(uint hwnd, Rect& rect);
void getLogFontSizes(LOGFONT& logFont, Size& size);
void dumpSnegApi(const string& path);
ParseMethodResult&& parseMethodText(uint text, uint firstLineNum, uint firstLexem = 0, uint allowedPreprocContextes = uint ( - 1 ));
ModuleStruct&& parseModuleText(uint textPtr, uint startAllowedPreproc = uint ( - 1 ));
uint preprocContextesToAccessModes(uint ppc);
uint execContextName(uint type, int lang);
uint parseDirective(const lexem& lex);
string getPreviousCommentBlock(uint startPos, uint beginOfBuffer, uint maxLine = 5);
void parseKeyword(lexem& lex);
uint addHotKey(uint hotKey, HotKeyHandler&& handler);
uint addTempHotKey(uint hotKey, HotKeyHandler&& handler);
void removeHotKey(uint id);
void clearAllHotKeys();
string hotKeyPresentation(uint hotkey);
uint setTimer(uint msec, TimerProc&& handler);
void removeTimer(uint timerID);
IBkEndUI&& toIBkEndUI(uint);
MyMessageHandler&& toMyMessageHandler(uint);
ICtx2Disp&& toICtx2Disp(uint);
ICommandState&& toICommandState(uint);
ICommandTarget&& toICommandTarget(uint);
ICommandReceiver&& toICommandReceiver(uint);
IListCmdState&& toIListCmdState(uint);
ICmdStateImpl&& toICmdStateImpl(uint);
ICmdDescription&& toICmdDescription(uint);
ICommandService&& toICommandService(uint);
IV8DataSource&& toIV8DataSource(uint);
IGridUISource&& toIGridUISource(uint);
IGrid&& toIGrid(uint);
IV8Bookmark&& toIV8Bookmark(uint);
ICalcValueCreator&& toICalcValueCreator(uint);
IExecutionStateMediumInStream&& toIExecutionStateMediumInStream(uint);
IExternalCalculatorDebugger&& toIExternalCalculatorDebugger(uint);
IExternalCalculatorOwner&& toIExternalCalculatorOwner(uint);
IDebugger&& toIDebugger(uint);
IDebugService&& toIDebugService(uint);
IPersistableDocument&& toIPersistableDocument(uint);
IDocument&& toIDocument(uint);
IPersistableObject&& toIPersistableObject(uint);
IOutPersistenceStorage&& toIOutPersistenceStorage(uint);
IInPersistenceStorage&& toIInPersistenceStorage(uint);
IStreamPersistenceStorage&& toIStreamPersistenceStorage(uint);
IDocumentSink&& toIDocumentSink(uint);
IEventRecipient&& toIEventRecipient(uint);
IEventService&& toIEventService(uint);
IIdleService&& toIIdleService(uint);
IIdleHandler&& toIIdleHandler(uint);
IAppExitCancel&& toIAppExitCancel(uint);
IFileSystem&& toIFileSystem(uint);
IFile&& toIFile(uint);
IFileEx&& toIFileEx(uint);
IStorageRW&& toIStorageRW(uint);
IUnpackFile&& toIUnpackFile(uint);
ITempFile&& toITempFile(uint);
IDocumentFactory&& toIDocumentFactory(uint);
ILangSettings&& toILangSettings(uint);
ICustomFormDesigner&& toICustomFormDesigner(uint);
ICopyHelperCreator&& toICopyHelperCreator(uint);
ICustomForm&& toICustomForm(uint);
ICustomFormLoader&& toICustomFormLoader(uint);
IRuntimeModule&& toIRuntimeModule(uint);
IForm&& toIForm(uint);
IFormCtrl&& toIFormCtrl(uint);
IFormDialog&& toIFormDialog(uint);
IMDEditService&& toIMDEditService(uint);
IInfoBaseService&& toIInfoBaseService(uint);
IMDService&& toIMDService(uint);
IConfigMngrUI&& toIConfigMngrUI(uint);
ITypesInfoProvider&& toITypesInfoProvider(uint);
IDataProviderInfo&& toIDataProviderInfo(uint);
IMDObject&& toIMDObject(uint);
IMDContainer&& toIMDContainer(uint);
IMDParentLink&& toIMDParentLink(uint);
IMDClass&& toIMDClass(uint);
IConfigMngr&& toIConfigMngr(uint);
IConfigMngrUIOwner&& toIConfigMngrUIOwner(uint);
IInfoBase&& toIInfoBase(uint);
IMDEditHelper&& toIMDEditHelper(uint);
IMDBaseObj&& toIMDBaseObj(uint);
ILocalString&& toILocalString(uint);
IMDEditModuleHelper&& toIMDEditModuleHelper(uint);
IMDTypedObj&& toIMDTypedObj(uint);
IMDExtObj&& toIMDExtObj(uint);
IImage&& toIImage(uint);
IV8Picture&& toIV8Picture(uint);
IGlyph&& toIGlyph(uint);
IV8PictureValue&& toIV8PictureValue(uint);
SCOM_Process&& toSCOM_Process(uint);
IGlobalContext&& toIGlobalContext(uint);
IGlobalContextInit&& toIGlobalContextInit(uint);
IProfileFolder&& toIProfileFolder(uint);
IProfileService&& toIProfileService(uint);
IProfileSource&& toIProfileSource(uint);
IPropertyService&& toIPropertyService(uint);
IControlDesign&& toIControlDesign(uint);
ITextManager&& toITextManager(uint);
ITextEditor&& toITextEditor(uint);
ITextManager_Operations&& toITextManager_Operations(uint);
ITextParserCache&& toITextParserCache(uint);
ITxtEdtOptions&& toITxtEdtOptions(uint);
IModuleEdit&& toIModuleEdit(uint);
ISourceLexer&& toISourceLexer(uint);
ITxtEdtExtender&& toITxtEdtExtender(uint);
ITxtEdtService&& toITxtEdtService(uint);
ITemplateProcessor&& toITemplateProcessor(uint);
IEdit&& toIEdit(uint);
IDataControl&& toIDataControl(uint);
IDataControlEx&& toIDataControlEx(uint);
IFldEdit&& toIFldEdit(uint);
IControlContext&& toIControlContext(uint);
IOutlineCoords&& toIOutlineCoords(uint);
ITEIntelliSence&& toITEIntelliSence(uint);
IV8Color&& toIV8Color(uint);
ITextExtBackColors&& toITextExtBackColors(uint);
ITextExtColors&& toITextExtColors(uint);
ITextExtention&& toITextExtention(uint);
TextManager&& toTextManager(uint);
ITypeContextInfo&& toITypeContextInfo(uint);
ITypeNameInfo&& toITypeNameInfo(uint);
ISettingsConsumer&& toISettingsConsumer(uint);
IContextDef&& toIContextDef(uint);
IContext&& toIContext(uint);
IAssistantData&& toIAssistantData(uint);
IContextDefExt&& toIContextDefExt(uint);
IAssistListInfo&& toIAssistListInfo(uint);
IAssistList&& toIAssistList(uint);
IType&& toIType(uint);
IValue&& toIValue(uint);
IEnumValCreator&& toIEnumValCreator(uint);
IIndexedCollectionRO&& toIIndexedCollectionRO(uint);
IIndexedCollectionFS&& toIIndexedCollectionFS(uint);
IValueArray&& toIValueArray(uint);
IVTColumnRO&& toIVTColumnRO(uint);
IVTColumn&& toIVTColumn(uint);
IVTRowRO&& toIVTRowRO(uint);
IVTRow&& toIVTRow(uint);
IValueTableBaseRO&& toIValueTableBaseRO(uint);
IValueTableBase&& toIValueTableBase(uint);
IValueTableColumns&& toIValueTableColumns(uint);
IValueTable&& toIValueTable(uint);
IValueSubTree&& toIValueSubTree(uint);
IValueTreeRow&& toIValueTreeRow(uint);
IValueTree&& toIValueTree(uint);
IValueStructure&& toIValueStructure(uint);
IView&& toIView(uint);
IWindowView&& toIWindowView(uint);
IFramedView&& toIFramedView(uint);
IDocumentView&& toIDocumentView(uint);
ITopLevelFrame&& toITopLevelFrame(uint);
IWindow&& toIWindow(uint);
ITopLevelFrameCore&& toITopLevelFrameCore(uint);
IContainedObject&& toIContainedObject(uint);
IClientSite&& toIClientSite(uint);
IContainer&& toIContainer(uint);
IFramedViewSite&& toIFramedViewSite(uint);
IViewContext&& toIViewContext(uint);
IViewLayouter&& toIViewLayouter(uint);
ITabbedLayouter&& toITabbedLayouter(uint);
IViewSplitter&& toIViewSplitter(uint);
IMDIClient&& toIMDIClient(uint);
IFormViewCore&& toIFormViewCore(uint);
Window&& toWindow(uint);
mbpRef&& tombp(uint);
SelectFileNameRef&& toSelectFileName(uint);
CommandIDRef&& toCommandID(uint);
CommandRef&& toCommand(uint);
KeyAccelRef&& toKeyAccel(uint);
CompositeIDRef&& toCompositeID(uint);
LineInfoRef&& toLineInfo(uint);
ImageInfoRef&& toImageInfo(uint);
CellFormatRef&& toCellFormat(uint);
DocSinkRef&& toDocSink(uint);
StorageFileInfoRef&& toStorageFileInfo(uint);
FileExceptionRef&& toFileException(uint);
FontRef&& toFont(uint);
MDPropertyRef&& toMDProperty(uint);
FieldInfoRef&& toFieldInfo(uint);
MDEventInfoRef&& toMDEventInfo(uint);
TypeInfoRef&& toTypeInfo(uint);
MDTreeItemInfoRef&& toMDTreeItemInfo(uint);
V8PictureRef&& toV8Picture(uint);
GlyphRef&& toGlyph(uint);
ExceptionRef&& toException(uint);
Sci_CharacterRangeRef&& toSci_CharacterRange(uint);
Sci_TextRangeRef&& toSci_TextRange(uint);
Sci_TextToFindRef&& toSci_TextToFind(uint);
Sci_RectangleRef&& toSci_Rectangle(uint);
Sci_NotifyHeaderRef&& toSci_NotifyHeader(uint);
SCNotificationRef&& toSCNotification(uint);
VectorRef&& toVector(uint);
v8strDataRef&& tov8strData(uint);
v8stringRef&& tov8string(uint);
ColorRef&& toColor(uint);
SyntaxItemInfoRef&& toSyntaxItemInfo(uint);
SyntaxItemInfosRef&& toSyntaxItemInfos(uint);
BackColorsItemRef&& toBackColorsItem(uint);
TextPositionRef&& toTextPosition(uint);
LocalWStringRef&& toLocalWString(uint);
TypeDomainPatternRef&& toTypeDomainPattern(uint);
list_nodeRef&& tolist_node(uint);
TypeContextInfoItemRef&& toTypeContextInfoItem(uint);
TypeNameInfoRef&& toTypeNameInfo(uint);
ContextValueInfoRef&& toContextValueInfo(uint);
URLRef&& toURL(uint);
DateRef&& toDate(uint);
NumericRef&& toNumeric(uint);
ValueRef&& toValue(uint);
TypeRef&& toType(uint);
VTColumnInfoRef&& toVTColumnInfo(uint);
StructKeysRef&& toStructKeys(uint);
ViewContextListNodeRef&& toViewContextListNode(uint);
ViewContextListRef&& toViewContextList(uint);
ViewPositionRef&& toViewPosition(uint);
ViewContextRef&& toViewContext(uint);
tagRECTRef&& totagRECT(uint);
uint64 copy_file(IFile& dst, IFile& src, uint64 size);
SCOM_Process&& currentProcess();
void val2var(const Value&, Variant&);
v8string load_module_wstring(uint charNameModule, uint charResID);
void var2val(const Variant&, Value&, int = 0, bool = false);
uint malloc(uint);
void free(uint);
uint UnDecorateSymbolName(uint mangled, uint demangled, uint len, uint flags);
bool is_alnum(uint16);
bool is_alpha(uint16);
bool is_cntrl(uint16);
bool is_digit(uint16);
bool is_graph(uint16);
bool is_lower(uint16);
bool is_print(uint16);
bool is_punct(uint16);
bool is_space(uint16);
bool is_title(uint16);
bool is_upper(uint16);
bool is_valid_name(const v8string&);
bool is_valid_path(const v8string&);
int hash(const v8string&);
int hash_nocase(const v8string&);
v8string Url_unescape(const v8string&);
void valueFromString(const v8string&, Value&);
IValue&& create_undefined_value();
IWindow& focus;
IWindow& getParent(IWindow& pThis);
IWindow& getFirstChild(IWindow& pThis);
uint getTopLevelHWND(IWindow& pThis);

// Globals props
as_env env;
Guid IID_IUnknown;
Guid IID_IDispatch;
Guid IID_IConnectionPointContainer;
Guid IID_ITypeInfo;
symbolClassTable;
string BuildDateTime;
Guid IID_IBkEndUI;
Guid IID_MyMessageHandler;
Guid IID_ICtx2Disp;
Guid IID_ICommandState;
Guid IID_ICommandTarget;
Guid IID_ICommandReceiver;
Guid IID_IListCmdState;
Guid IID_ICmdStateImpl;
Guid IID_ICmdDescription;
Guid IID_ICommandService;
Guid CLSID_CmdStateImpl;
Guid cmdFrameGroup;
Guid cmdFrntend;
Guid IID_IV8DataSource;
Guid IID_IGridUISource;
Guid IID_IGrid;
Guid IID_IV8Bookmark;
Guid IID_ICalcValueCreator;
Guid IID_IExecutionStateMediumInStream;
Guid IID_IExternalCalculatorDebugger;
Guid IID_IExternalCalculatorOwner;
Guid IID_IDebugger;
Guid IID_IDebugService;
Guid CLSID_WatchWindow;
Guid CLSID_Watch;
Guid CalcValueCreator;
Guid DebuggerCommandTarget;
Guid kExecutionStateEvent;
Guid kExecutionStateMediumOpen;
Guid kExecutionStateMediumClose;
Guid kRestartApplication;
Guid kDebuggerAppWaitStart;
Guid kDebuggerAppWaitStop;
Guid kDebuggerGetDebugProcessMode;
Guid kDebuggerStopDebugMode;
Guid kSomeEvent3;
Guid kSomeEvent6;
Guid IID_IPersistableDocument;
Guid IID_IDocument;
Guid IID_IPersistableObject;
Guid IID_IOutPersistenceStorage;
Guid IID_IInPersistenceStorage;
Guid IID_IStreamPersistenceStorage;
Guid IID_IDocumentSink;
Guid CLSID_StreamOutPersistenceStorage;
Guid CLSID_StreamInPersistenceStorage;
Guid IID_IEventRecipient;
Guid IID_IEventService;
Guid IID_IIdleService;
Guid IID_IIdleHandler;
Guid IID_IAppExitCancel;
Guid eventCreateFrame;
Guid eventBeforeExitApp;
Guid eventExitApp;
Guid IID_IFileSystem;
Guid IID_IFile;
Guid IID_IFileEx;
Guid IID_IStorageRW;
Guid IID_IUnpackFile;
Guid CLSID_MemoryFile;
Guid CLSID_TempFile;
Guid CLSID_StorageRW;
Guid CLSID_UnpackFile;
Guid IID_ITempFile;
Guid IID_IDocumentFactory;
Guid IID_ILangSettings;
Guid IID_ICustomFormDesigner;
Guid IID_ICopyHelperCreator;
Guid IID_ICustomForm;
Guid IID_ICustomFormLoader;
Guid IID_IRuntimeModule;
Guid IID_IForm;
Guid IID_IFormCtrl;
Guid IID_IFormDialog;
Guid CLSID_FormDesDocFactory;
Guid CLSID_FormDocumentFactory;
Guid CLSID_CoreTypesInfoProvider;
Guid CLSID_SimpleLangSettings;
Guid CLSID_ModuleWizard;
Guid CLSID_Layouter;
Guid IID_V8StyleCol;
Guid IID_V8PictureCol;
Guid IID_FormCopy1;
Guid IID_FormCopy2;
Guid IID_FormCopy3;
Guid IID_FormCopy4;
Guid IID_FormCopy5;
Guid IID_FormCopy6;
Guid IID_FormCopy7;
Guid CLSID_TIProvider;
Guid CLSID_CustomForm;
Guid CLSID_CustomFormLoader;
Guid IID_IMDEditService;
Guid IID_IInfoBaseService;
Guid IID_IMDService;
Guid IID_IConfigMngrUI;
Guid IID_ITypesInfoProvider;
Guid IID_IDataProviderInfo;
Guid IID_IMDObject;
Guid IID_IMDContainer;
Guid IID_IMDParentLink;
Guid IID_IMDClass;
Guid IID_IConfigMngr;
Guid IID_IConfigMngrUIOwner;
Guid IID_IInfoBase;
Guid IID_IMDEditHelper;
Guid IID_IMDBaseObj;
Guid IID_ILocalString;
Guid IID_IMDEditModuleHelper;
Guid IID_IMDTypedObj;
Guid IID_IMDExtObj;
Guid eventMetaData;
Guid eventSaveModules;
Guid mdClassCmnModule;
Guid namePropUuid;
Guid synmPropUuid;
Guid descPropUuid;
Guid gModOfMgr;
Guid gModule;
Guid formPropUuid;
Guid gcmIsGlobal;
Guid gcmClMngApp;
Guid gcmServer;
Guid gcmExtCon;
Guid gcmClStdApp;
Guid gcmCallSrv;
Guid gcmPriviged;
Guid gcmReuseRetVal;
Guid gMainRunMode;
Guid gModStdApp;
Guid gModMngApp;
Guid gModSeance;
Guid gModExtCon;
Guid IID_IImage;
Guid IID_IV8Picture;
Guid IID_IGlyph;
Guid IID_IV8PictureValue;
Guid CLSID_V8PictureValue;
Guid IID_NULL;
Guid IID_SCOM_Process;
Guid IID_IGlobalContext;
Guid IID_IGlobalContextInit;
Guid IID_IProfileFolder;
Guid IID_IProfileService;
Guid IID_IProfileSource;
Guid CLSID_FileProfileSrc;
Guid gpflComputer;
Guid gpflBase;
Guid gpflBaseUser;
Guid gpflCompBase;
Guid gpflCompBaseUser;
Guid gpflSnegopat;
Guid IID_IPropertyService;
Guid IID_IControlDesign;
Guid IID_ITextManager;
Guid IID_ITextEditor;
Guid IID_ITextManager_Operations;
Guid IID_ITextParserCache;
Guid IID_ITxtEdtOptions;
Guid IID_IModuleEdit;
Guid IID_ISourceLexer;
Guid IID_ITxtEdtExtender;
Guid IID_ITxtEdtService;
Guid IID_ITemplateProcessor;
Guid IID_IEdit;
Guid IID_IDataControl;
Guid IID_IDataControlEx;
Guid IID_IFldEdit;
Guid IID_IControlContext;
Guid IID_IOutlineCoords;
Guid IID_ITEIntelliSence;
Guid CLSID_TxtEdtDoc;
Guid CLSID_TxtEdtView;
Guid CLSID_TxtEdtCtrl;
Guid gTextExtModule;
Guid gTextExtModule1;
Guid eTxtEdtOptionChanged;
Guid cmdGroupTxtEdt;
Guid CLSID_SourceLexer;
Guid evActivateAssist;
Guid IID_IV8Color;
Guid V8Color;
Guid IID_ITextExtBackColors;
Guid IID_ITextExtColors;
Guid IID_ITextExtention;
Guid CLSID_TextExtSQL;
Guid IID_TextManager;
Guid IID_ITypeContextInfo;
Guid IID_ITypeNameInfo;
Guid IID_ISettingsConsumer;
Guid IID_IContextDef;
Guid IID_IContext;
Guid IID_IAssistantData;
Guid IID_IContextDefExt;
Guid IID_IAssistListInfo;
Guid IID_IAssistList;
Guid BuiltinFuncInfo;
Guid TypeNameInfoSource;
Guid IID_IGlobalContextDef;
Guid CLSID_AssistList;
Guid IID_IType;
Guid IID_IValue;
Guid IID_IEnumValCreator;
Guid IID_IIndexedCollectionRO;
Guid IID_IIndexedCollectionFS;
Guid IID_IValueArray;
Guid IID_IVTColumnRO;
Guid IID_IVTColumn;
Guid IID_IVTRowRO;
Guid IID_IVTRow;
Guid IID_IValueTableBaseRO;
Guid IID_IValueTableBase;
Guid IID_IValueTableColumns;
Guid IID_IValueTable;
Guid IID_IValueSubTree;
Guid IID_IValueTreeRow;
Guid IID_IValueTree;
Guid IID_IValueStructure;
Guid CLSID_ValueArray;
Guid CLSID_ValueTable;
Guid CLSID_ValueTree;
Guid CLSID_ValueStruct;
Guid IID_IView;
Guid IID_IWindowView;
Guid IID_IFramedView;
Guid IID_IDocumentView;
Guid IID_ITopLevelFrame;
Guid IID_IWindow;
Guid IID_ITopLevelFrameCore;
Guid IID_IContainedObject;
Guid IID_IClientSite;
Guid IID_IContainer;
Guid IID_IFramedViewSite;
Guid IID_IViewContext;
Guid IID_IViewLayouter;
Guid IID_ITabbedLayouter;
Guid IID_IViewSplitter;
Guid IID_IMDIClient;
Guid IID_IFormViewCore;
Guid gMDIClientID;
Guid IID_Window;
Rect kEmptyRect;
