/*
* API файл для модуля "snegopat", создан 22.12.2020 09:57
* Препроцессор:
* console = 1
* ver = 8.3.18.0
* x64 = 1
* x86 = 0
*/

// Enums
enum InternalObjectsSizes {
	NoCaseSet_size = 80,
	NoCaseSetIterator_size = 16,
	UintMap_size = 80,
	UintMapIterator_size = 24,
	NoCaseMap_size = 96,
	NoCaseMapIterator_size = 24,
	utf8string_size = 8,
	StringComparator_size = 72,
	string_size = 8,
	Guid_size = 16,
	SourcesThunkFixup_size = 4,
	CppCatch_size = 24,
	TrapSwap_size = 40,
	TrapVirtualStdCall_size = 32,
	ScriptError_size = 48,
	Variant_size = 24,
	SmartBoxWindow_size = 264,
	ToolTipWindow_size = 72,
	SmartBoxItemData_size = 24,
	lex_provider_size = 24,
	lexem_size = 24,
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
	sizeof_ptr = 8,
	TYPEATTR_size = 80,
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
	TYPEATTR_tdescAlias_offset = 64,
	TYPEATTR_idldescType_offset = 72,
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
	SqliteTransactionGuard_size = 16,
	SqliteTransactionGuard_db_offset = 0,
	SqliteTransactionGuard_success_offset = 8,
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
	MSG_size = 48,
	MSG_hwnd_offset = 0,
	MSG_message_offset = 8,
	MSG_wParam_offset = 16,
	MSG_lParam_offset = 24,
	MSG_time_offset = 32,
	MSG_pt_offset = 36,
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
	mbp_size = 48,
	mbp_pNode_offset = 0,
	mbp_size_offset = 8,
	mbp_fakeNode_offset = 16,
	mbp_prev_offset = 24,
	mbp_next_offset = 32,
	mbp_i1_offset = 40,
	mbp_i2_offset = 41,
	SelectFileName_size = 200,
	SelectFileName_mode_offset = 0,
	SelectFileName_flags_offset = 4,
	SelectFileName_filter_offset = 8,
	SelectFileName_filterString_offset = 32,
	SelectFileName_filterIndex_offset = 60,
	SelectFileName_defExt_offset = 64,
	SelectFileName_initialFileName_offset = 92,
	SelectFileName_selectedFiles_offset = 120,
	SelectFileName_directory_offset = 144,
	SelectFileName_title_offset = 172,
	CommandID_size = 20,
	CommandID_group_offset = 0,
	CommandID_num_offset = 16,
	Command_size = 32,
	Command_id_offset = 0,
	Command_param_offset = 20,
	Command_object_offset = 24,
	ICmdSateImpl_size = 56,
	ICmdSateImpl_id_offset = 16,
	ICmdSateImpl_cmdState_offset = 40,
	ICmdSateImpl_lstState_offset = 48,
	KeyAccel_size = 36,
	KeyAccel_text_offset = 0,
	KeyAccel_vkCode_offset = 28,
	KeyAccel_flags_offset = 32,
	CompositeID_size = 24,
	CompositeID_id_offset = 0,
	CompositeID_uuid_offset = 4,
	CompositeID_emptyUuid_offset = 20,
	LineInfo_size = 24,
	LineInfo_hasChild_offset = 0,
	LineInfo_level_offset = 4,
	LineInfo_expandable_offset = 8,
	LineInfo_bookmark_offset = 16,
	ImageInfo_size = 16,
	ImageInfo_image_offset = 0,
	ImageInfo_posInPicture_offset = 4,
	ImageInfo_paintStyle_offset = 12,
	CellFormat_size = 592,
	CellFormat_text_offset = 0,
	CellFormat_state_offset = 28,
	CellFormat_image_offset = 32,
	CellFormat_extImage_offset = 48,
	CellFormat_clrBkg_offset = 64,
	CellFormat_clrText_offset = 92,
	CellFormat_font_offset = 120,
	CellFormat_readOnly_offset = 280,
	CellFormat_horAlign_offset = 284,
	CellFormat_verAlign_offset = 288,
	CellFormat_tooltip_offset = 292,
	CellFormat_showAddCheck_offset = 320,
	CellFormat_visible_offset = 321,
	CellFormat_height_offset = 322,
	CellFormat_autoHeight_offset = 324,
	CellFormat_hyperLink_offset = 325,
	CellFormat_v8Style_offset = 328,
	CellFormat_validFields_offset = 332,
	DocSink_size = 52,
	DocSink_vtab_offset = 0,
	DocSink_refCount_offset = 4,
	DocSink_editHelper_offset = 16,
	DocSink_propId_offset = 24,
	StorageFileInfo_size = 60,
	StorageFileInfo_name_offset = 32,
	FileException_size = 120,
	FileException_id_offset = 0,
	FileException_descr_offset = 16,
	FileException_ptr_offset = 44,
	FileException_code_offset = 48,
	FileException_url_offset = 56,
	Font_size = 160,
	Font_kind_offset = 0,
	Font_lf_offset = 4,
	Font_autoCharSet_offset = 96,
	Font_style_offset = 100,
	Font_validMask_offset = 124,
	MDProperty_size = 64,
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
	MDProperty_pIType_offset = 56,
	FieldInfo_size = 104,
	FieldInfo_name1_offset = 0,
	FieldInfo_name2_offset = 28,
	FieldInfo_description_offset = 56,
	FieldInfo_typeDomain_offset = 88,
	FieldInfo_readOnly_offset = 96,
	MDEventInfo_size = 56,
	MDEventInfo_request_offset = 0,
	MDEventInfo_result_offset = 1,
	MDEventInfo_kind_offset = 4,
	MDEventInfo_object_offset = 8,
	MDEventInfo_parent_offset = 16,
	MDEventInfo_id_offset = 24,
	MDEventInfo_changedPropId_offset = 40,
	TypeInfo_size = 104,
	TypeInfo_typeId_offset = 0,
	TypeInfo_name_offset = 16,
	TypeInfo_priority_offset = 44,
	TypeInfo_order_offset = 48,
	TypeInfo_image_offset = 56,
	TypeInfo_i1_offset = 64,
	TypeInfo_compaundType_offset = 68,
	TypeInfo_unMergeable_offset = 69,
	TypeInfo_str_offset = 72,
	MDTreeItemInfo_size = 104,
	MDTreeItemInfo_id_offset = 0,
	MDTreeItemInfo_text_offset = 16,
	MDTreeItemInfo_editHelper_offset = 48,
	MDTreeItemInfo_image_offset = 56,
	V8Picture_size = 136,
	V8Picture_kind_offset = 0,
	V8Picture_cid_offset = 4,
	V8Picture_url_offset = 32,
	V8Picture_picture_offset = 96,
	V8Picture_pxForTransparent_offset = 104,
	V8Picture_withTransparent_offset = 112,
	V8Picture_isGlyph_offset = 113,
	V8Picture_ptGlyph_offset = 116,
	V8Picture_szGlyph_offset = 124,
	Glyph_size = 40,
	Glyph_block_offset = 16,
	Glyph_size_offset = 24,
	Glyph_point_offset = 32,
	Exception_size = 48,
	Exception_id_offset = 0,
	Exception_descr_offset = 16,
	Exception_ptr_offset = 44,
	Sci_CharacterRange_size = 8,
	Sci_CharacterRange_cpMin_offset = 0,
	Sci_CharacterRange_cpMax_offset = 4,
	Sci_TextRange_size = 16,
	Sci_TextRange_chrg_offset = 0,
	Sci_TextRange_lpstrText_offset = 8,
	Sci_TextToFind_size = 24,
	Sci_TextToFind_chrg_offset = 0,
	Sci_TextToFind_lpstrText_offset = 8,
	Sci_TextToFind_chrgText_offset = 16,
	Sci_Rectangle_size = 16,
	Sci_Rectangle_left_offset = 0,
	Sci_Rectangle_top_offset = 4,
	Sci_Rectangle_right_offset = 8,
	Sci_Rectangle_bottom_offset = 12,
	Sci_NotifyHeader_size = 24,
	Sci_NotifyHeader_hwndFrom_offset = 0,
	Sci_NotifyHeader_idFrom_offset = 8,
	Sci_NotifyHeader_code_offset = 16,
	SCNotification_size = 128,
	SCNotification_nmhdr_offset = 0,
	SCNotification_position_offset = 24,
	SCNotification_ch_offset = 28,
	SCNotification_modifiers_offset = 32,
	SCNotification_modificationType_offset = 36,
	SCNotification_text_offset = 40,
	SCNotification_length_offset = 48,
	SCNotification_linesAdded_offset = 52,
	SCNotification_message_offset = 56,
	SCNotification_wParam_offset = 64,
	SCNotification_lParam_offset = 72,
	SCNotification_line_offset = 80,
	SCNotification_foldLevelNow_offset = 84,
	SCNotification_foldLevelPrev_offset = 88,
	SCNotification_margin_offset = 92,
	SCNotification_listType_offset = 96,
	SCNotification_x_offset = 100,
	SCNotification_y_offset = 104,
	SCNotification_token_offset = 108,
	SCNotification_annotationLinesAdded_offset = 112,
	SCNotification_updated_offset = 116,
	SCNotification_listCompletionMethod_offset = 120,
	Vector_size = 24,
	Vector_start_offset = 0,
	Vector_end_offset = 8,
	Vector_allocked_offset = 16,
	v8strData_size = 8,
	v8strData_refCount_offset = 0,
	v8strData_text_offset = 4,
	v8string_size = 28,
	v8string_len_offset = 0,
	v8string_data_offset = 4,
	v8string_pEnd_offset = 12,
	v8string_i1_offset = 20,
	v8string_i2_offset = 24,
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
	SyntaxItemInfos_size = 32,
	SyntaxItemInfos_refCount_offset = 0,
	SyntaxItemInfos_infos_offset = 8,
	BackColorsItem_size = 12,
	BackColorsItem_start_offset = 0,
	BackColorsItem_len_offset = 4,
	BackColorsItem_color_offset = 8,
	TextPosition_size = 16,
	TextPosition_vtable_offset = 0,
	TextPosition_line_offset = 8,
	TextPosition_col_offset = 12,
	LocalWString_size = 4,
	TypeDomainPattern_size = 8,
	TypeDomainPattern_ptr_offset = 0,
	TypeContextInfoItem_size = 336,
	TypeContextInfoItem_name_offset = 0,
	TypeContextInfoItem_isMethod_offset = 28,
	TypeContextInfoItem_haveRetVal_offset = 29,
	TypeContextInfoItem_params_offset = 32,
	TypeContextInfoItem_from_offset = 36,
	TypeContextInfoItem_typeDomain_offset = 40,
	TypeContextInfoItem_lst_0_offset = 48,
	TypeContextInfoItem_lst_4_offset = 56,
	TypeContextInfoItem_flag1_offset = 64,
	TypeContextInfoItem_ip1_offset = 72,
	TypeContextInfoItem_ip2_offset = 80,
	TypeContextInfoItem_flag0_1_offset = 88,
	TypeContextInfoItem_flag0_2_offset = 92,
	TypeContextInfoItem_objectId_offset = 96,
	TypeContextInfoItem_mdPropId_offset = 112,
	TypeContextInfoItem_isTypeSource_offset = 128,
	TypeContextInfoItem_providedTypeDomain_offset = 136,
	TypeContextInfoItem_str1_offset = 144,
	TypeContextInfoItem_str2_offset = 172,
	TypeContextInfoItem_byte_0_offset = 200,
	TypeContextInfoItem_someVector_offset = 208,
	TypeNameInfo_size = 44,
	TypeNameInfo_name_offset = 0,
	TypeNameInfo_uuid_offset = 28,
	ContextValueInfo_size = 88,
	ContextValueInfo_nameEng_offset = 0,
	ContextValueInfo_nameRus_offset = 28,
	ContextValueInfo_typeDomainPattern_offset = 56,
	ContextValueInfo_isMutable_offset = 64,
	ContextValueInfo_zero1_offset = 68,
	ContextValueInfo_zero2_offset = 72,
	ContextValueInfo_pZero1_offset = 76,
	ContextValueInfo_pZero2_offset = 80,
	ContextValueInfo_zero3_offset = 84,
	URL_size = 64,
	URL_url_offset = 0,
	URL_vec_offset = 32,
	URL_b1_offset = 56,
	URL_b2_offset = 57,
	Date_size = 8,
	Date_ticks_offset = 0,
	Numeric_size = 40,
	Numeric_allocked_offset = 0,
	Numeric_length_offset = 4,
	Numeric_prec_offset = 8,
	Numeric__sign_offset = 12,
	Numeric_data_offset = 16,
	Numeric_inplace1_offset = 24,
	Numeric_inplace2_offset = 28,
	Numeric_inplace3_offset = 32,
	Numeric_inplace4_offset = 36,
	Value_size = 16,
	Value_vtable_offset = 0,
	Value_pValue_offset = 8,
	Type_size = 8,
	Type_pType_offset = 0,
	VTColumnInfo_size = 96,
	VTColumnInfo_name1_offset = 0,
	VTColumnInfo_name2_offset = 28,
	VTColumnInfo_type_offset = 56,
	VTColumnInfo_title_offset = 64,
	VTColumnInfo_width_offset = 92,
	StructKeys_size = 8,
	StructKeys_key1_offset = 0,
	StructKeys_key2_offset = 4,
	IMDIClient_size = 48,
	IMDIClient_childsIds_offset = 24,
	ViewContextListNode_size = 16,
	ViewContextListNode_next_offset = 0,
	ViewContextListNode_prev_offset = 4,
	ViewContextListNode_view_offset = 8,
	ViewContextList_size = 12,
	ViewContextList_head_offset = 0,
	ViewContextList_end_offset = 4,
	ViewPosition_size = 240,
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
	ViewPosition_floatViewData_offset = 120,
	ViewPosition_dockViewData_offset = 148,
	ViewPosition_autoHideViewData_offset = 176,
	ViewPosition_center_offset = 204,
	ViewPosition_unk3_offset = 205,
	ViewPosition_unk4_offset = 208,
	ViewPosition_unk5_offset = 224,
	ViewPosition_unk6_offset = 228,
	ViewPosition_unk7_offset = 236,
	ViewContext_size = 560,
	ViewContext_id_offset = 0,
	ViewContext_vpCurrent_offset = 48,
	ViewContext_vpOriginal_offset = 300,
	ViewContext_sizeOriginal_offset = 540,
	ViewContext_parent_offset = 552,
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
	inplaceStringSize = 12,
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
	ModuleTxtExtSettingsMap = 968,
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
typedef uint64 (*WndFunc)(uint, uint64, uint64);
typedef bool (*HotKeyHandler)();
typedef void (*TimerProc)(uint64);

// Typedefs
typedef uint64 int_ptr;
typedef uint64 size_t;
typedef uint64 HWND;
typedef uint64 HDC;
typedef uint COLORREF;
typedef uint64 HICON;
typedef uint64 HMENU;
typedef uint UINT;
typedef int BOOL;
typedef uint8 BYTE;
typedef uint64 PTR;
typedef uint DWORD;
typedef uint64 HFONT;
typedef uint64 HGDIOBJ;
typedef uint64 HMONITOR;
typedef uint64 WPARAM;
typedef uint64 LPARAM;
typedef uint64 LRESULT;
typedef int LONG;
typedef int long;
typedef uint64 uptr_t;
typedef uint64 sptr_t;
typedef int Sci_Position;
typedef uint Sci_PositionU;
typedef int Sci_PositionCR;
typedef uint64 Sci_SurfaceID;
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
	const bool isValid;	// 0x18 (24)
	const string errorString;	// 0x10 (16)
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
	bool contains(uint64 key) const;
	bool insert(uint64 key, const T& val);
	bool tryInsert(uint64 key, const T& val);
	bool remove(uint64 key);
	void clear();
	void swap(UintMap<T>& other);
	UintMapIterator<T> begin() const;
	UintMapIterator<T> find(uint64 key) const;
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
	uint64 key;
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
	utf8string(uint64 text, uint len = - 1);
	utf8string(const utf8string&);
	uint length;
	operator uint64() const;
	operator string() const;
	string str;
	uint64 ptr;	// 0x0 (0)
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
	string(const uint16&);
	string(uint64 addr, uint len);
	string(const string& patern, uint repeat);
	string(uint);
	string(int);
	string(uint64);
	string(int64);
	string(double);
	string(bool);
	int find(RegExp&&, uint offset = 0, uint& len) const;
	uint countOf(RegExp&&, uint maxCount = 0, uint offset = 0) const;
	RegExpResult&& match(RegExp&&, uint maxCount = 0, uint offset = 0) const;
	string& replace(RegExp&&, const string& repl, uint maxCount = 0, uint offset = 0);
	string& replace(RegExp&&, RegExpReplaceFunc&& cb, uint maxCount = 0, uint offset = 0);
	array<string>&& split(RegExp&&) const;
	string extract(RegExp&&) const;
	string& remove(RegExp&&);
	void ctor(uint64 text, uint len);
	string& operator=(const string& i);
	string& operator=(uint);
	string& operator=(int);
	string& operator=(uint64);
	string& operator=(int64);
	string& operator=(double);
	string operator+(const string&) const;
	string operator+(uint) const;
	string operator+(int) const;
	string operator+(uint64) const;
	string operator+(int64) const;
	string operator+(double) const;
	string operator+(bool) const;
	string& operator=(bool);
	string& operator+=(const string&);
	string& operator+=(uint);
	string& operator+=(int);
	string& operator+=(uint64);
	string& operator+=(int64);
	string& operator+=(double);
	string& operator+=(bool);
	int operator<(const string&) const;
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
	array<string>&& split(const string&) const;
	string& replace(const string&, const string&);
	string& replace(uint16 from, uint16 to);
	string replaced(const string&, const string&) const;
	string& makeUpper();
	string uppered() const;
	string& makeLower();
	string lowered() const;
	string& insert(uint, const string&);
	string& insert(uint, uint16);
	string& remove(uint from, uint count = 1);
	string& replace(uint, uint16);
	string substr(int start, int len = 0) const;
	string mid(uint start, int len = - 1) const;
	string dup() const;
	int compareNoCase(const string&) const;
	uint64 cstr;
	uint16 operator[](uint) const;
	uint64 setLength(uint);
	string& padRight(uint16, uint);
	string& padLeft(uint16, uint);
	bool beginFrom(const string& other) const;
	utf8string toUtf8() const;
	string& fromUtf8(const utf8string&);
	uint self;
	operator v8string() const;
};

class Guid {
public:
	Guid(const string& str);
	bool parseString(const string& str);
	Guid& operator=(const string&);
	operator string();
	bool operator==(const Guid&) const;
	GuidRef&& ref() const;
	uint64 self;
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
	const TrapState state;	// 0x20 (32)
};

class TrapVirtualStdCall {
public:
	~TrapVirtualStdCall();
	TrapVirtualStdCall();
	void setTrap(?& obj, uint vtIdx, ?& func, int callType = asCALL_STDCALL);
	void swap();
	void getOriginal(?&);
	const TrapState state;	// 0x18 (24)
};

class ScriptError {
public:
	uint line;	// 0x0 (0)
	uint col;	// 0x4 (4)
	uint errCode;	// 0x8 (8)
	string source;	// 0x10 (16)
	string description;	// 0x18 (24)
	string sourceCode;	// 0x20 (32)
	bool bDebugPossible;	// 0x28 (40)
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
	string getEnvVar(const string& varName) const;
	uint logLevel;
	void showConsole() const;
	uint64 intParam(const string& name) const;
	const string& strParam(const string& name) const;
	const string mainFolder;	// 0x0 (0)
	const string processName;	// 0x8 (8)
	uint64 processVersion;	// 0x10 (16)
	uint64 coreAsVersion;	// 0x18 (24)
	const string strProcessVersion;	// 0x20 (32)
	const string strCoreAsVersion;	// 0x28 (40)
	const string ownerName;	// 0x30 (48)
};

class IUnknown {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	uint64 self;
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
	operator ICmdSateImpl&&();
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
	uint64 self;
	IUnknown& unk;
	bool findMember(const string& name, int& id);
	bool getParamsCount(int id, int& params);
	bool call(int id, array<Variant>& args, Variant& res);
	bool getProp(const string& name, Variant& res);
	bool setProp(const string& name, Variant& newVal);
};

class IConnectionPointContainer {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	uint FindConnectionPoint(const Guid& riid, IUnknown&&&);
};

class TYPEATTR {
public:
	TYPEATTRRef&& ref() const;
	uint64 self;
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
	uint64 tdescAlias;	// 0x40 (64)
	uint64 idldescType;	// 0x48 (72)
};

class FUNCDESC {
public:
	FUNCDESCRef&& ref() const;
	uint64 self;
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
	uint64 self;
	void ctor(uint _db);
	void dtor();
	uint64 db;	// 0x0 (0)
	bool success;	// 0x8 (8)
};

class LOGFONT {
public:
	LOGFONTRef&& ref() const;
	uint64 self;
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
	uint64 self;
	uint cbSize;	// 0x0 (0)
	Rect rcMonitor;	// 0x4 (4)
	Rect rcWork;	// 0x14 (20)
	uint dwFlags;	// 0x24 (36)
};

class MSG {
public:
	MSGRef&& ref() const;
	uint64 self;
	uint64 hwnd;	// 0x0 (0)
	uint message;	// 0x8 (8)
	uint64 wParam;	// 0x10 (16)
	uint64 lParam;	// 0x18 (24)
	uint time;	// 0x20 (32)
	Point pt;	// 0x24 (36)
};

class Rect {
public:
	Rect();
	Rect(int, int, int, int);
	RectRef&& ref() const;
	uint64 self;
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
	uint64 self;
	void ctor();
	int x;	// 0x0 (0)
	int y;	// 0x4 (4)
};

class Size {
public:
	~Size();
	Size();
	SizeRef&& ref() const;
	uint64 self;
	void ctor();
	void dtor();
	int cx;	// 0x0 (0)
	int cy;	// 0x4 (4)
};

class MINMAXINFO {
public:
	MINMAXINFORef&& ref() const;
	uint64 self;
	Point ptReserved;	// 0x0 (0)
	Point ptMaxSize;	// 0x8 (8)
	Point ptMaxPosition;	// 0x10 (16)
	Point ptMinTrackSize;	// 0x18 (24)
	Point ptMaxTrackSize;	// 0x20 (32)
};

class GuidRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(GuidRef&&);
	GuidRef&& operator+(uint64) const;
	Guid ref;	// 0x0 (0)
};

class TYPEATTRRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(TYPEATTRRef&&);
	TYPEATTRRef&& operator+(uint64) const;
	TYPEATTR ref;	// 0x0 (0)
};

class FUNCDESCRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(FUNCDESCRef&&);
	FUNCDESCRef&& operator+(uint64) const;
	FUNCDESC ref;	// 0x0 (0)
};

class SqliteTransactionGuardRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(SqliteTransactionGuardRef&&);
	SqliteTransactionGuardRef&& operator+(uint64) const;
	SqliteTransactionGuard ref;	// 0x0 (0)
};

class LOGFONTRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(LOGFONTRef&&);
	LOGFONTRef&& operator+(uint64) const;
	LOGFONT ref;	// 0x0 (0)
};

class MONITORINFORef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(MONITORINFORef&&);
	MONITORINFORef&& operator+(uint64) const;
	MONITORINFO ref;	// 0x0 (0)
};

class MSGRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(MSGRef&&);
	MSGRef&& operator+(uint64) const;
	MSG ref;	// 0x0 (0)
};

class RectRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(RectRef&&);
	RectRef&& operator+(uint64) const;
	Rect ref;	// 0x0 (0)
};

class PointRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(PointRef&&);
	PointRef&& operator+(uint64) const;
	Point ref;	// 0x0 (0)
};

class SizeRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(SizeRef&&);
	SizeRef&& operator+(uint64) const;
	Size ref;	// 0x0 (0)
};

class MINMAXINFORef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(MINMAXINFORef&&);
	MINMAXINFORef&& operator+(uint64) const;
	MINMAXINFO ref;	// 0x0 (0)
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
	uint64 doDefault();
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
	const uint64 hwnd;	// 0x8 (8)
	const uint rowHeight;	// 0xF4 (244)
	const uint currentIdx;	// 0xE8 (232)
};

class ToolTipWindow {
public:
	~ToolTipWindow();
	ToolTipWindow();
	void create(uint64 parent);
	void setText(const string& text, int bHasBold, uint& width, uint& height);
	void destroy();
	const uint64 hwnd;	// 0x8 (8)
};

class SmartBoxItemData {
public:
	~SmartBoxItemData();
	SmartBoxItemData();
	string descr;	// 0x0 (0)
	string key;	// 0x8 (8)
	uint hotOrder;	// 0x10 (16)
	uint8 image;	// 0x14 (20)
	bool exclude;	// 0x15 (21)
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
	string name;	// 0x8 (8)
	uint type;	// 0x10 (16)
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
	string name;	// 0x8 (8)
	uint line;	// 0x10 (16)
	uint beginPos;	// 0x14 (20)
	uint length;	// 0x18 (24)
	uint8 execContext;	// 0x1C (28)
	uint8 accesses;	// 0x1D (29)
	bool isExport;	// 0x1E (30)
	bool isFunction;	// 0x38 (56)
	bool hasErrorInDeclaration;	// 0x39 (57)
};

class ModuleStructVar {
public:
	string name;	// 0x8 (8)
	uint line;	// 0x10 (16)
	uint beginPos;	// 0x14 (20)
	uint length;	// 0x18 (24)
	uint8 execContext;	// 0x1C (28)
	uint8 accesses;	// 0x1D (29)
	bool isExport;	// 0x1E (30)
};

class lex_provider {
public:
	~lex_provider();
	lex_provider();
	lex_provider(uint64 start, uint line = 1);
	void setSource(uint64 start, uint line = 1);
	bool atEnd() const;
	bool next(lexem& lex);
	bool nextWithKeyword(lexem& lex);
	uint64 start;	// 0x8 (8)
	uint64 pos;	// 0x0 (0)
	uint line;	// 0x10 (16)
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
	uint64 start;	// 0x0 (0)
	uint line;	// 0x8 (8)
	uint length;	// 0xC (12)
	uint type;	// 0x10 (16)
};

class SmartBoxSite {
public:
	void onDoSelect(SmartBoxItemBaseIface&& selItem);
	bool onKeydown(uint64 wParam, uint64 lParam);
	void onChar(uint64 wParam, uint64 lParam);
	bool onKillFocus(uint64 newWnd);
};

class IBkEndUI {
public:
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	void openView(IFramedView& view, const ViewPosition& pos = ViewPosition ( ), int openIn = 0, bool activate = true, const Guid& g = IID_NULL);
	int doModal1(IFramedView& pView, uint64 i1, uint64 i2, uint64 i3, uint64 i4, uint64 i5, uint64 i6, uint64 i7, uint64 i8);
	int messageBox(const v8string& text, uint64 type = 0, uint64 timeout = 0, uint64 caption = 0, uint64 parent = 0, mbp& param = mbp ( ), uint64 i1 = 0, uint64 i2 = 0, uint64 i3 = 0, uint64 i4 = 0, uint64 i5 = 0);
	int doModal2(IFramedView& pView, uint64 i1, uint64 i2, uint64 i3, uint64 i4, uint64 i5, uint64 i6, uint64 i7);
	ModalStates currentModalState();
	int doMsgLine(const v8string& text, uint64 marker = mNone, const Guid& g = IID_NULL, uint64 i1 = 0, IUnknown&& pUnkObject = null, const V8Picture& customMarker = V8Picture ( ));
	bool GetFileName(SelectFileName& data, uint64 timeout, uint64 parent);
};

class MyMessageHandler {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	void process();
};

class mbp {
public:
	mbp();
	mbpRef&& ref() const;
	uint64 self;
	void ctor();
	uint64 pNode;	// 0x0 (0)
	uint64 size;	// 0x8 (8)
	uint64 fakeNode;	// 0x10 (16)
	uint64 prev;	// 0x18 (24)
	uint64 next;	// 0x20 (32)
	int8 i1;	// 0x28 (40)
	int8 i2;	// 0x29 (41)
};

class SelectFileName {
public:
	SelectFileNameRef&& ref() const;
	uint64 self;
	SelectFileMode mode;	// 0x0 (0)
	uint flags;	// 0x4 (4)
	Vector filter;	// 0x8 (8)
	v8string filterString;	// 0x20 (32)
	uint filterIndex;	// 0x3C (60)
	v8string defExt;	// 0x40 (64)
	v8string initialFileName;	// 0x5C (92)
	Vector selectedFiles;	// 0x78 (120)
	v8string directory;	// 0x90 (144)
	v8string title;	// 0xAC (172)
};

class ICtx2Disp {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	IUnknown&& getContext();
};

class CommandID {
public:
	CommandID(const Guid& group, int num);
	CommandIDRef&& ref() const;
	uint64 self;
	void ctor(const Guid& group, int num);
	Guid group;	// 0x0 (0)
	uint num;	// 0x10 (16)
};

class Command {
public:
	Command(const CommandID& _id, int p);
	CommandRef&& ref() const;
	uint64 self;
	void ctor(const CommandID& _id, int p);
	CommandID id;	// 0x0 (0)
	int param;	// 0x14 (20)
	uint64 object;	// 0x18 (24)
};

class ICommandState {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	void setCount(uint count);
};

class ICmdSateImpl {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	void setCommand(const CommandID& id, IUnknown&& state);
	CommandID id;	// 0x10 (16)
	ICommandState&& cmdState;	// 0x28 (40)
	IListCmdState&& lstState;	// 0x30 (48)
};

class KeyAccel {
public:
	KeyAccelRef&& ref() const;
	uint64 self;
	v8string text;	// 0x0 (0)
	uint vkCode;	// 0x1C (28)
	uint8 flags;	// 0x20 (32)
};

class ICmdDescription {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
	bool hasChild;	// 0x0 (0)
	int level;	// 0x4 (4)
	bool expandable;	// 0x8 (8)
	IV8Bookmark&& bookmark;	// 0x10 (16)
};

class IV8DataSource {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	bool getCellFormat(IV8Bookmark& bkmk, uint colId, Value& value, CellFormat& cellFormat);
};

class IGrid {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
	void init();
	uint image;	// 0x0 (0)
	Point posInPicture;	// 0x4 (4)
	uint paintStyle;	// 0xC (12)
};

class CellFormat {
public:
	CellFormatRef&& ref() const;
	uint64 self;
	void init();
	v8string text;	// 0x0 (0)
	CheckState state;	// 0x1C (28)
	ImageInfo image;	// 0x20 (32)
	ImageInfo extImage;	// 0x30 (48)
	Color clrBkg;	// 0x40 (64)
	Color clrText;	// 0x5C (92)
	Font font;	// 0x78 (120)
	bool readOnly;	// 0x118 (280)
	HAlign horAlign;	// 0x11C (284)
	VAlign verAlign;	// 0x120 (288)
	v8string tooltip;	// 0x124 (292)
	bool showAddCheck;	// 0x140 (320)
	bool visible;	// 0x141 (321)
	uint16 height;	// 0x142 (322)
	bool autoHeight;	// 0x144 (324)
	bool hyperLink;	// 0x145 (325)
	uint v8Style;	// 0x148 (328)
	uint16 validFields;	// 0x14C (332)
};

class IV8Bookmark {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
};

class ICalcValueCreator {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	uint create(IUnknown&&&, const v8string&);
};

class IExecutionStateMediumInStream {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	void f();
};

class IExternalCalculatorOwner {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	void setExternalCalculator(IUnknown& pIExternalCalculator);
};

class IDebugger {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	uint getBigObject(IUnknown&&&);
};

class IDebugService {
public:
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	IDebugger& getDebugger();
};

class IPersistableDocument {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	void f();
};

class IInPersistenceStorage {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	void f();
};

class IStreamPersistenceStorage {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	void f();
};

class DocSink {
public:
	DocSinkRef&& ref() const;
	uint64 self;
	int vtab;	// 0x0 (0)
	uint refCount;	// 0x4 (4)
	IUnknown&& editHelper;	// 0x10 (16)
	Guid propId;	// 0x18 (24)
};

class IEventRecipient {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	void onEvent(const Guid& eventID, int val, IUnknown& obj);
};

class IEventService {
public:
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	void cancelExit(bool hide = false);
};

class IFileSystem {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	uint openURL(IFile&&&, const URL& url, int mode);
};

class IFile {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
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
	uint64 self;
	void dtor();
	v8string name;	// 0x20 (32)
};

class IStorageRW {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
	Guid id;	// 0x0 (0)
	v8string descr;	// 0x10 (16)
	uint ptr;	// 0x2C (44)
	int code;	// 0x30 (48)
	URL url;	// 0x38 (56)
};

class IUnpackFile {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	void init(IFile&& dest, int t = 0);
};

class ITempFile {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	uint detach(URL&);
	void attach(const URL& url);
	void setMemLimit(uint limit);
	uint getMemLimit();
};

class Font {
public:
	FontRef&& ref() const;
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	uint createDocument(IDocument&&&, const v8string& initData);
};

class ILangSettings {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	void setIids(const Guid& guid, const Vector& iids);
};

class ICustomForm {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	void loadCustomForm(IFile& file, ICustomForm& form);
};

class IRuntimeModule {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	uint connectConfig(IConfigMngr&&& res, IFile&& file, int mode, int t = 0, int m = 0);
	IInfoBase&& getDefault();
};

class IMDService {
public:
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	IMDObject&& getMDObject();
};

class IMDClass {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	IConfigMngrUI&& getUI();
};

class IInfoBase {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	const LocalWString& localStrings();
};

class IMDEditModuleHelper {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	uint url(URL&);
};

class MDProperty {
public:
	MDPropertyRef&& ref() const;
	uint64 self;
	int refs;	// 0x0 (0)
	Guid id;	// 0x4 (4)
	uint nameEng;	// 0x14 (20)
	uint nameRus;	// 0x18 (24)
	int i1;	// 0x1C (28)
	int i2;	// 0x20 (32)
	uint resMod1;	// 0x24 (36)
	uint resID;	// 0x28 (40)
	uint resMod2;	// 0x2C (44)
	uint resCatID;	// 0x30 (48)
	IType&& pIType;	// 0x38 (56)
};

class FieldInfo {
public:
	FieldInfoRef&& ref() const;
	uint64 self;
	void init();
	v8string name1;	// 0x0 (0)
	v8string name2;	// 0x1C (28)
	v8string description;	// 0x38 (56)
	TypeDomainPattern typeDomain;	// 0x58 (88)
	bool readOnly;	// 0x60 (96)
};

class MDEventInfo {
public:
	MDEventInfoRef&& ref() const;
	uint64 self;
	bool request;	// 0x0 (0)
	bool result;	// 0x1 (1)
	EventMetaDataKind kind;	// 0x4 (4)
	IMDObject&& object;	// 0x8 (8)
	IMDObject&& parent;	// 0x10 (16)
	Guid id;	// 0x18 (24)
	Guid changedPropId;	// 0x28 (40)
};

class TypeInfo {
public:
	~TypeInfo();
	TypeInfoRef&& ref() const;
	uint64 self;
	void dtor();
	Guid typeId;	// 0x0 (0)
	v8string name;	// 0x10 (16)
	int priority;	// 0x2C (44)
	int order;	// 0x30 (48)
	IGlyph&& image;	// 0x38 (56)
	uint i1;	// 0x40 (64)
	bool compaundType;	// 0x44 (68)
	bool unMergeable;	// 0x45 (69)
	v8string str;	// 0x48 (72)
};

class MDTreeItemInfo {
public:
	MDTreeItemInfoRef&& ref() const;
	uint64 self;
	void init();
	Guid id;	// 0x0 (0)
	v8string text;	// 0x10 (16)
	IMDEditHelper&& editHelper;	// 0x30 (48)
	IImage&& image;	// 0x38 (56)
};

class V8Picture {
public:
	V8Picture();
	V8PictureRef&& ref() const;
	uint64 self;
	void ctor();
	bool compareAttribs(const V8Picture&) const;
	bool opEqual(const V8Picture&) const;
	int kind;	// 0x0 (0)
	CompositeID cid;	// 0x4 (4)
	URL url;	// 0x20 (32)
	IV8Picture&& picture;	// 0x60 (96)
	Point pxForTransparent;	// 0x68 (104)
	bool withTransparent;	// 0x70 (112)
	bool isGlyph;	// 0x71 (113)
	Point ptGlyph;	// 0x74 (116)
	Size szGlyph;	// 0x7C (124)
};

class IImage {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
};

class IV8Picture {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
};

class IGlyph {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
};

class IV8PictureValue {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	void setPicture(const V8Picture& picture);
	void getPicture(V8Picture& picture);
};

class Glyph {
public:
	GlyphRef&& ref() const;
	uint64 self;
	IImage&& block;	// 0x10 (16)
	Size size;	// 0x18 (24)
	Point point;	// 0x20 (32)
};

class SCOM_Process {
public:
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
	Guid id;	// 0x0 (0)
	v8string descr;	// 0x10 (16)
	uint ptr;	// 0x2C (44)
};

class IGlobalContext {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
};

class IGlobalContextInit {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	void init(IInfoBase& infoBase);
};

class IProfileFolder {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	void init(const v8string& path);
};

class IPropertyService {
public:
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	void showPropWnd(bool show);
	bool isPropWndVisible();
};

class Sci_CharacterRange {
public:
	Sci_CharacterRangeRef&& ref() const;
	uint64 self;
	int cpMin;	// 0x0 (0)
	int cpMax;	// 0x4 (4)
};

class Sci_TextRange {
public:
	Sci_TextRangeRef&& ref() const;
	uint64 self;
	Sci_CharacterRange chrg;	// 0x0 (0)
	uint64 lpstrText;	// 0x8 (8)
};

class Sci_TextToFind {
public:
	Sci_TextToFindRef&& ref() const;
	uint64 self;
	Sci_CharacterRange chrg;	// 0x0 (0)
	uint64 lpstrText;	// 0x8 (8)
	Sci_CharacterRange chrgText;	// 0x10 (16)
};

class Sci_Rectangle {
public:
	Sci_RectangleRef&& ref() const;
	uint64 self;
	int left;	// 0x0 (0)
	int top;	// 0x4 (4)
	int right;	// 0x8 (8)
	int bottom;	// 0xC (12)
};

class Sci_NotifyHeader {
public:
	Sci_NotifyHeaderRef&& ref() const;
	uint64 self;
	uint64 hwndFrom;	// 0x0 (0)
	uint64 idFrom;	// 0x8 (8)
	uint code;	// 0x10 (16)
};

class SCNotification {
public:
	SCNotificationRef&& ref() const;
	uint64 self;
	Sci_NotifyHeader nmhdr;	// 0x0 (0)
	int position;	// 0x18 (24)
	int ch;	// 0x1C (28)
	int modifiers;	// 0x20 (32)
	int modificationType;	// 0x24 (36)
	uint64 text;	// 0x28 (40)
	int length;	// 0x30 (48)
	int linesAdded;	// 0x34 (52)
	int message;	// 0x38 (56)
	uint64 wParam;	// 0x40 (64)
	uint64 lParam;	// 0x48 (72)
	int line;	// 0x50 (80)
	int foldLevelNow;	// 0x54 (84)
	int foldLevelPrev;	// 0x58 (88)
	int margin;	// 0x5C (92)
	int listType;	// 0x60 (96)
	int x;	// 0x64 (100)
	int y;	// 0x68 (104)
	int token;	// 0x6C (108)
	int annotationLinesAdded;	// 0x70 (112)
	int updated;	// 0x74 (116)
	int listCompletionMethod;	// 0x78 (120)
};

class Vector {
public:
	~Vector();
	Vector();
	VectorRef&& ref() const;
	uint64 self;
	void ctor();
	void dtor();
	uint64 size();
	uint64 allock(uint count, uint size);
	uint64 count(uint s);
	uint64 start;	// 0x0 (0)
	uint64 end;	// 0x8 (8)
	uint64 allocked;	// 0x10 (16)
};

class v8strData {
public:
	v8strDataRef&& ref() const;
	uint64 self;
	uint refCount;	// 0x0 (0)
	uint8 text;	// 0x4 (4)
};

class v8string {
public:
	~v8string();
	v8string();
	v8string(const v8string& other);
	v8string(uint64 text, uint l);
	v8stringRef&& ref() const;
	uint64 self;
	void ctor();
	void ctor1(const v8string& other);
	void ctor3(uint64 text, uint l);
	void dtor();
	operator string() const;
	uint64 cstr;
	uint length;
	void operator=(const v8string& s);
	bool isEmpty() const;
	void operator=(const string& s);
	string str;
	uint len;	// 0x0 (0)
	uint64 data;	// 0x4 (4)
	uint64 pEnd;	// 0xC (12)
	int i1;	// 0x14 (20)
	int i2;	// 0x18 (24)
};

class IControlDesign {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	TextManager&& getTextManager();
};

class ITextEditor {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 getWindowHandle();
};

class ITextManager_Operations {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	void clearCache();
};

class ITxtEdtOptions {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	void f();
};

class ISourceLexer {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	void splitToLexems(const v8string& source, Vector& lexems);
};

class ITxtEdtExtender {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	const Guid& getGuid();
	v8string getName();
};

class ITxtEdtService {
public:
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	bool getText(v8string& str);
};

class IDataControl {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	void test();
};

class IControlContext {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	bool convertTextPosition(TextPosition& tp, bool bFromScreen);
};

class ITEIntelliSence {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	uint64 getMousePos(Point&);
	uint64 getCaretPosForTooltip(Point&);
	uint64 getMousePosForTooltip(Point&);
	void getContextListPos(Point& caretPos, uint& lineHeight);
};

class Color {
public:
	Color(uint r, uint g, uint b);
	ColorRef&& ref() const;
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	void setColor(const Color& color);
	void getColor(Color& color);
};

class SyntaxItemInfo {
public:
	SyntaxItemInfo();
	SyntaxItemInfo(const SyntaxItemInfo& si);
	SyntaxItemInfoRef&& ref() const;
	uint64 self;
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
	uint64 self;
	uint refCount;	// 0x0 (0)
	Vector infos;	// 0x8 (8)
};

class BackColorsItem {
public:
	BackColorsItemRef&& ref() const;
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	bool hasCustomBackground(int nLineNo, SyntaxItemInfos& items);
	void getColorInfo(uint currentBGColor, SyntaxItemInfos& items, Vector& res);
};

class ITextExtColors {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	void getColors(const v8string& sourceLine, Vector& items);
};

class ITextExtention {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
	void ctor(const TextPosition&);
	void ctor(int, int);
	void ctor();
	void dtor();
	bool isValid() const;
	TextPosition opSub(const TextPosition&);
	TextPosition& operator=(const TextPosition&);
	bool operator==(const TextPosition&) const;
	uint64 vtable;	// 0x0 (0)
	uint line;	// 0x8 (8)
	uint col;	// 0xC (12)
};

class TextManager {
public:
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	void setSelectText(uint64, bool);
	void getTextArea(const TextPosition&, const TextPosition&, uint64& result);
};

class LocalWString {
public:
	LocalWString();
	LocalWStringRef&& ref() const;
	uint64 self;
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
	uint64 self;
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
	uint64 typesCount() const;
	void ctor();
	uint64 ptr;	// 0x0 (0)
};

class TypeContextInfoItem {
public:
	TypeContextInfoItemRef&& ref() const;
	uint64 self;
	void init();
	v8string name;	// 0x0 (0)
	bool isMethod;	// 0x1C (28)
	bool haveRetVal;	// 0x1D (29)
	uint params;	// 0x20 (32)
	int from;	// 0x24 (36)
	TypeDomainPattern typeDomain;	// 0x28 (40)
	uint64 lst_0;	// 0x30 (48)
	uint64 lst_4;	// 0x38 (56)
	uint flag1;	// 0x40 (64)
	uint64 ip1;	// 0x48 (72)
	uint64 ip2;	// 0x50 (80)
	uint flag0_1;	// 0x58 (88)
	uint flag0_2;	// 0x5C (92)
	Guid objectId;	// 0x60 (96)
	Guid mdPropId;	// 0x70 (112)
	bool isTypeSource;	// 0x80 (128)
	TypeDomainPattern providedTypeDomain;	// 0x88 (136)
	v8string str1;	// 0x90 (144)
	v8string str2;	// 0xAC (172)
	bool byte_0;	// 0xC8 (200)
	Vector someVector;	// 0xD0 (208)
};

class ITypeContextInfo {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	uint count();
	void info(uint index, TypeContextInfoItem& item, int lang);
};

class TypeNameInfo {
public:
	TypeNameInfoRef&& ref() const;
	uint64 self;
	v8string name;	// 0x0 (0)
	Guid uuid;	// 0x1C (28)
};

class ITypeNameInfo {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	void setSettings(IUnknown&& value, const Guid& kind);
};

class IContextDef {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	uint object(IUnknown&&&);
	IUnknown&& extObject();
	const Guid& propUuid();
};

class ContextValueInfo {
public:
	ContextValueInfoRef&& ref() const;
	uint64 self;
	void init();
	void done();
	v8string nameEng;	// 0x0 (0)
	v8string nameRus;	// 0x1C (28)
	TypeDomainPattern typeDomainPattern;	// 0x38 (56)
	bool isMutable;	// 0x40 (64)
	uint zero1;	// 0x44 (68)
	uint zero2;	// 0x48 (72)
	uint pZero1;	// 0x4C (76)
	uint pZero2;	// 0x50 (80)
	uint zero3;	// 0x54 (84)
};

class IContextDefExt {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	Vector vec;	// 0x20 (32)
	bool b1;	// 0x38 (56)
	bool b2;	// 0x39 (57)
};

class IType {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	uint create(Value& val, int eval);
	void getAll(Vector& vals);
};

class Date {
public:
	Date(int y = 0, int m = 0, int d = 0);
	Date(int, int, int, int, int, int);
	DateRef&& ref() const;
	uint64 self;
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
	uint64 self;
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
	uint64 data;	// 0x10 (16)
	uint inplace1;	// 0x18 (24)
	uint inplace2;	// 0x1C (28)
	uint inplace3;	// 0x20 (32)
	uint inplace4;	// 0x24 (36)
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
	uint64 self;
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
	uint64 vtable;	// 0x0 (0)
	IValue&& pValue;	// 0x8 (8)
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
	void ctor();
	void dtor();
	v8string name1;	// 0x0 (0)
	v8string name2;	// 0x1C (28)
	TypeDomainPattern type;	// 0x38 (56)
	v8string title;	// 0x40 (64)
	uint width;	// 0x5C (92)
};

class StructKeys {
public:
	StructKeysRef&& ref() const;
	uint64 self;
	uint key1;	// 0x0 (0)
	uint key2;	// 0x4 (4)
};

class IValueStructure {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	IWindowView&& opCast();
	void drawView(uint64 dc, const Rect& rect, const Rect& updateRect);
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
	uint64 self;
	IUnknown& unk;
	operator IView&&();
	void drawView(uint64 dc, const Rect& rect, const Rect& updateRect);
	bool setViewEnable(bool enable);
	bool isViewEnable();
	Size getViewExtent();
	bool createWindow(uint64 parentWindow);
	void destroyWindow();
	bool showWindow(bool show);
	bool isWindowVisible();
	void moveAfter(uint64 wnd);
	void invalidateRect(const Rect& rect, bool eraseBkgnd = true);
	uint64 hwnd();
	void windowRect(Rect& rect);
	uint getWindowBackgroundColor();
};

class IFramedView {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	void init(const v8string& title, uint64 icon, uint64 parent, const Rect& rect, int nCmdShow);
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
	uint64 self;
	IUnknown& unk;
	bool createWindow(uint64 parent, const Rect& rect, bool visible);
	void destroyWindow();
	uint64 hwnd();
};

class ITopLevelFrameCore {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	void f();
};

class IContainedObject {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	IContainer&& getContainer();
};

class IContainer {
public:
	uint AddRef();
	uint Release();
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
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
	uint64 self;
	IUnknown& unk;
	bool updateData(bool save, int controlId);
	void endDialog(int result);
	void setFormSize(const Size& size, bool inDLU = true);
};

class ViewContextListNode {
public:
	ViewContextListNodeRef&& ref() const;
	uint64 self;
	uint next;	// 0x0 (0)
	uint prev;	// 0x4 (4)
	IViewContext&& view;	// 0x8 (8)
};

class ViewContextList {
public:
	ViewContextListRef&& ref() const;
	uint64 self;
	uint head;	// 0x0 (0)
	uint end;	// 0x4 (4)
};

class ViewPosition {
public:
	ViewPosition();
	ViewPositionRef&& ref() const;
	uint64 self;
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
	v8string floatViewData;	// 0x78 (120)
	v8string dockViewData;	// 0x94 (148)
	v8string autoHideViewData;	// 0xB0 (176)
	bool center;	// 0xCC (204)
	bool unk3;	// 0xCD (205)
	Rect unk4;	// 0xD0 (208)
	int unk5;	// 0xE0 (224)
	Size unk6;	// 0xE4 (228)
	bool unk7;	// 0xEC (236)
};

class ViewContext {
public:
	ViewContextRef&& ref() const;
	uint64 self;
	Guid id;	// 0x0 (0)
	ViewPosition vpCurrent;	// 0x30 (48)
	ViewPosition vpOriginal;	// 0x12C (300)
	Size sizeOriginal;	// 0x21C (540)
	IUnknown&& parent;	// 0x228 (552)
};

class tagRECT {
public:
	tagRECTRef&& ref() const;
	uint64 self;
	int left;	// 0x0 (0)
	int top;	// 0x4 (4)
	int right;	// 0x8 (8)
	int bottom;	// 0xC (12)
};

class Window {
public:
	uint queryIface(const Guid&, IUnknown&&&);
	operator IUnknown&&();
	uint64 self;
	IUnknown& unk;
	void GetClientRect(tagRECT&);
	void GetWindowRect(tagRECT&);
	uint64 getClientRectWithoutScrollers(Rect&);
	int getScrollerHeight();
	int getScrollerWidth();
	uint64 getNCSize(Size&);
	void clientToWindow(Point&);
	void clientToWindow(Rect&);
	void windowToClient(Point&);
	void windowToClient(Rect&);
	uint64 calcShadowRect(Rect&);
	uint64 calcInBorderRect(Rect&, Rect&);
	void getWindowRects(Rect& windowRect, Rect& withoutScrollers, Rect& clientArea);
	uint64 calcWindowTopRightPos(Rect&, IWindow&, IWindow&, int, int);
	IWindow& getParent();
	IWindow& getFirstChild();
	uint64 getTopLevelHWND();
	int SetCaretPos(int, int);
};

class mbpRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(mbpRef&&);
	mbpRef&& operator+(uint64) const;
	mbp ref;	// 0x0 (0)
};

class SelectFileNameRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(SelectFileNameRef&&);
	SelectFileNameRef&& operator+(uint64) const;
	SelectFileName ref;	// 0x0 (0)
};

class CommandIDRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(CommandIDRef&&);
	CommandIDRef&& operator+(uint64) const;
	CommandID ref;	// 0x0 (0)
};

class CommandRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(CommandRef&&);
	CommandRef&& operator+(uint64) const;
	Command ref;	// 0x0 (0)
};

class KeyAccelRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(KeyAccelRef&&);
	KeyAccelRef&& operator+(uint64) const;
	KeyAccel ref;	// 0x0 (0)
};

class CompositeIDRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(CompositeIDRef&&);
	CompositeIDRef&& operator+(uint64) const;
	CompositeID ref;	// 0x0 (0)
};

class LineInfoRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(LineInfoRef&&);
	LineInfoRef&& operator+(uint64) const;
	LineInfo ref;	// 0x0 (0)
};

class ImageInfoRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(ImageInfoRef&&);
	ImageInfoRef&& operator+(uint64) const;
	ImageInfo ref;	// 0x0 (0)
};

class CellFormatRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(CellFormatRef&&);
	CellFormatRef&& operator+(uint64) const;
	CellFormat ref;	// 0x0 (0)
};

class DocSinkRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(DocSinkRef&&);
	DocSinkRef&& operator+(uint64) const;
	DocSink ref;	// 0x0 (0)
};

class StorageFileInfoRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(StorageFileInfoRef&&);
	StorageFileInfoRef&& operator+(uint64) const;
	StorageFileInfo ref;	// 0x0 (0)
};

class FileExceptionRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(FileExceptionRef&&);
	FileExceptionRef&& operator+(uint64) const;
	FileException ref;	// 0x0 (0)
};

class FontRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(FontRef&&);
	FontRef&& operator+(uint64) const;
	Font ref;	// 0x0 (0)
};

class MDPropertyRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(MDPropertyRef&&);
	MDPropertyRef&& operator+(uint64) const;
	MDProperty ref;	// 0x0 (0)
};

class FieldInfoRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(FieldInfoRef&&);
	FieldInfoRef&& operator+(uint64) const;
	FieldInfo ref;	// 0x0 (0)
};

class MDEventInfoRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(MDEventInfoRef&&);
	MDEventInfoRef&& operator+(uint64) const;
	MDEventInfo ref;	// 0x0 (0)
};

class TypeInfoRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(TypeInfoRef&&);
	TypeInfoRef&& operator+(uint64) const;
	TypeInfo ref;	// 0x0 (0)
};

class MDTreeItemInfoRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(MDTreeItemInfoRef&&);
	MDTreeItemInfoRef&& operator+(uint64) const;
	MDTreeItemInfo ref;	// 0x0 (0)
};

class V8PictureRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(V8PictureRef&&);
	V8PictureRef&& operator+(uint64) const;
	V8Picture ref;	// 0x0 (0)
};

class GlyphRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(GlyphRef&&);
	GlyphRef&& operator+(uint64) const;
	Glyph ref;	// 0x0 (0)
};

class ExceptionRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(ExceptionRef&&);
	ExceptionRef&& operator+(uint64) const;
	Exception ref;	// 0x0 (0)
};

class Sci_CharacterRangeRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(Sci_CharacterRangeRef&&);
	Sci_CharacterRangeRef&& operator+(uint64) const;
	Sci_CharacterRange ref;	// 0x0 (0)
};

class Sci_TextRangeRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(Sci_TextRangeRef&&);
	Sci_TextRangeRef&& operator+(uint64) const;
	Sci_TextRange ref;	// 0x0 (0)
};

class Sci_TextToFindRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(Sci_TextToFindRef&&);
	Sci_TextToFindRef&& operator+(uint64) const;
	Sci_TextToFind ref;	// 0x0 (0)
};

class Sci_RectangleRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(Sci_RectangleRef&&);
	Sci_RectangleRef&& operator+(uint64) const;
	Sci_Rectangle ref;	// 0x0 (0)
};

class Sci_NotifyHeaderRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(Sci_NotifyHeaderRef&&);
	Sci_NotifyHeaderRef&& operator+(uint64) const;
	Sci_NotifyHeader ref;	// 0x0 (0)
};

class SCNotificationRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(SCNotificationRef&&);
	SCNotificationRef&& operator+(uint64) const;
	SCNotification ref;	// 0x0 (0)
};

class VectorRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(VectorRef&&);
	VectorRef&& operator+(uint64) const;
	Vector ref;	// 0x0 (0)
};

class v8strDataRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(v8strDataRef&&);
	v8strDataRef&& operator+(uint64) const;
	v8strData ref;	// 0x0 (0)
};

class v8stringRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(v8stringRef&&);
	v8stringRef&& operator+(uint64) const;
	v8string ref;	// 0x0 (0)
};

class ColorRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(ColorRef&&);
	ColorRef&& operator+(uint64) const;
	Color ref;	// 0x0 (0)
};

class SyntaxItemInfoRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(SyntaxItemInfoRef&&);
	SyntaxItemInfoRef&& operator+(uint64) const;
	SyntaxItemInfo ref;	// 0x0 (0)
};

class SyntaxItemInfosRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(SyntaxItemInfosRef&&);
	SyntaxItemInfosRef&& operator+(uint64) const;
	SyntaxItemInfos ref;	// 0x0 (0)
};

class BackColorsItemRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(BackColorsItemRef&&);
	BackColorsItemRef&& operator+(uint64) const;
	BackColorsItem ref;	// 0x0 (0)
};

class TextPositionRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(TextPositionRef&&);
	TextPositionRef&& operator+(uint64) const;
	TextPosition ref;	// 0x0 (0)
};

class LocalWStringRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(LocalWStringRef&&);
	LocalWStringRef&& operator+(uint64) const;
	LocalWString ref;	// 0x0 (0)
};

class TypeDomainPatternRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(TypeDomainPatternRef&&);
	TypeDomainPatternRef&& operator+(uint64) const;
	TypeDomainPattern ref;	// 0x0 (0)
};

class TypeContextInfoItemRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(TypeContextInfoItemRef&&);
	TypeContextInfoItemRef&& operator+(uint64) const;
	TypeContextInfoItem ref;	// 0x0 (0)
};

class TypeNameInfoRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(TypeNameInfoRef&&);
	TypeNameInfoRef&& operator+(uint64) const;
	TypeNameInfo ref;	// 0x0 (0)
};

class ContextValueInfoRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(ContextValueInfoRef&&);
	ContextValueInfoRef&& operator+(uint64) const;
	ContextValueInfo ref;	// 0x0 (0)
};

class URLRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(URLRef&&);
	URLRef&& operator+(uint64) const;
	URL ref;	// 0x0 (0)
};

class DateRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(DateRef&&);
	DateRef&& operator+(uint64) const;
	Date ref;	// 0x0 (0)
};

class NumericRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(NumericRef&&);
	NumericRef&& operator+(uint64) const;
	Numeric ref;	// 0x0 (0)
};

class ValueRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(ValueRef&&);
	ValueRef&& operator+(uint64) const;
	Value ref;	// 0x0 (0)
};

class TypeRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(TypeRef&&);
	TypeRef&& operator+(uint64) const;
	Type ref;	// 0x0 (0)
};

class VTColumnInfoRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(VTColumnInfoRef&&);
	VTColumnInfoRef&& operator+(uint64) const;
	VTColumnInfo ref;	// 0x0 (0)
};

class StructKeysRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(StructKeysRef&&);
	StructKeysRef&& operator+(uint64) const;
	StructKeys ref;	// 0x0 (0)
};

class ViewContextListNodeRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(ViewContextListNodeRef&&);
	ViewContextListNodeRef&& operator+(uint64) const;
	ViewContextListNode ref;	// 0x0 (0)
};

class ViewContextListRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(ViewContextListRef&&);
	ViewContextListRef&& operator+(uint64) const;
	ViewContextList ref;	// 0x0 (0)
};

class ViewPositionRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(ViewPositionRef&&);
	ViewPositionRef&& operator+(uint64) const;
	ViewPosition ref;	// 0x0 (0)
};

class ViewContextRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(ViewContextRef&&);
	ViewContextRef&& operator+(uint64) const;
	ViewContext ref;	// 0x0 (0)
};

class tagRECTRef {
public:
	uint64 self;
	int operator<(uint64);
	int operator<(tagRECTRef&&);
	tagRECTRef&& operator+(uint64) const;
	tagRECT ref;	// 0x0 (0)
};


// Globals funcs
void dumpVtable(?&, const string& alias = "");
bool checkInterface(?&);

namespace mem {
uint8 byte;
void set_byte(uint64, uint8);
uint16 word;
void set_word(uint64, uint16);
uint dword;
void set_dword(uint64, uint);
uint64 qword;
void set_qword(uint64, uint64);
uint64 size_t;
void set_size_t(uint64, uint64);
uint64 int_ptr;
void set_int_ptr(uint64, uint64);
float real;
void set_real(uint64, float);
double dreal;
void set_dreal(uint64, double);
uint64 addressOf(?&);
void memcpy(uint64, uint64, uint64);
void memmove(uint64, uint64, uint64);
void memset(uint64, int, uint64);
int interlockedIncr(uint64 address);
int interlockedDecr(uint64 address);
int interlockedExchangeAdd(uint64 address, int value);
int64 interlockedExchangeAdd64(uint64 address, int64 value);

} // namespace mem
string join(const array<string>&, const string&);
string formatInt(int64, const string& = "", uint width = 0);
string formatFloat(double, const string&, uint, uint);
int64 parseInt(const string&);
double parseFloat(const string&);
string stringFromAddress(uint64 ptr, uint len = uint ( - 1 ));
string format(const string& pattern, const array<any>& args);
void Print(const string& message);
void Out(const string& message);
void initFuncDefFromAddress(uint64 address, ?& f, int callDecl = asCALL_CDECL);
void doLog(const string& message, uint logLevel = 2);
IUnknown&& toIUnknown(uint64);
IDispatch&& toIDispatch(uint64);
IConnectionPointContainer&& toIConnectionPointContainer(uint64);
GuidRef&& toGuid(uint64);
TYPEATTRRef&& toTYPEATTR(uint64);
FUNCDESCRef&& toFUNCDESC(uint64);
SqliteTransactionGuardRef&& toSqliteTransactionGuard(uint64);
LOGFONTRef&& toLOGFONT(uint64);
MONITORINFORef&& toMONITORINFO(uint64);
MSGRef&& toMSG(uint64);
RectRef&& toRect(uint64);
PointRef&& toPoint(uint64);
SizeRef&& toSize(uint64);
MINMAXINFORef&& toMINMAXINFO(uint64);
uint SysAllocString(uint16&);
void SysFreeString(uint);
int sqlite3_open(uint name, uint64& db);
int sqlite3_open_v2(uint name, uint64& db, int flags, uint vfs = 0);
int sqlite3_close(uint64 db);
int sqlite3_close_v2(uint64 db);
int sqlite3_errcode(uint64 db);
int sqlite3_extended_errcode(uint64 db);
uint sqlite3_errmsg16(uint64 db);
int sqlite3_exec(uint64 db, uint utf8text, uint cb = 0, uint cbarg = 0, uint& errmsg);
int sqlite3_prepare16_v2(uint64 db, uint64 zSql, int nByte, uint64& stmt, uint64& pzTail);
uint sqlite3_db_handle(uint64 stmt);
int sqlite3_step(uint64 stmt);
int sqlite3_reset(uint64 stmt);
int sqlite3_finalize(uint64 stmt);
int sqlite3_changes(uint64 db);
int sqlite3_total_changes(uint64 db);
int64 sqlite3_last_insert_rowid(uint64 db);
int sqlite3_column_count(uint64 stmt);
uint64 sqlite3_column_name16(uint64 stmt, int nColumn);
uint64 sqlite3_column_blob(uint64 stmt, int iCol);
int sqlite3_column_bytes(uint64 stmt, int iCol);
int sqlite3_column_bytes16(uint64 stmt, int iCol);
double sqlite3_column_double(uint64 stmt, int iCol);
int sqlite3_column_int(uint64 stmt, int iCol);
int64 sqlite3_column_int64(uint64 stmt, int iCol);
uint64 sqlite3_column_text(uint64 stmt, int iCol);
uint64 sqlite3_column_text16(uint64 stmt, int iCol);
int sqlite3_column_type(uint64 stmt, int iCol);
int sqlite3_clear_bindings(uint64 stmt);
int sqlite3_bind_parameter_count(uint64 stmt);
int sqlite3_bind_parameter_index(uint64 stmt, uint64 utf8Name);
uint64 sqlite3_bind_parameter_name(uint64 stmt, int);
int sqlite3_bind_blob(uint64 stmt, int, uint64 data, int n, int destr = SQLITE_TRANSIENT);
int sqlite3_bind_double(uint64 stmt, int, double);
int sqlite3_bind_int(uint64 stmt, int, int);
int sqlite3_bind_int64(uint64 stmt, int, int64);
int sqlite3_bind_null(uint64 stmt, int);
int sqlite3_bind_text(uint64 stmt, int, uint64 text, int nLen, int destr = SQLITE_TRANSIEN);
int sqlite3_bind_text16(uint64 stmt, int, uint64 text, int nLen, int destr = SQLITE_TRANSIEN);
int SetWindowText(uint64, uint64);
int GetWindowTextLength(uint64 hWnd);
int GetWindowText(uint64 hWnd, uint64 lpString, int nMaxCount);
void keybd_event(uint8 bVk, uint8 bScan, uint dwFlags, uint64 dwExtraInfo);
uint MapVirtualKey(uint uCode, uint uMapType);
uint64 SetFocus(uint64 hWnd);
uint64 GetFocus();
uint64 SendMessage(uint64, uint, uint64 = 0, uint64 = 0);
int PostMessage(uint64, uint, uint64 = 0, uint64 = 0);
int DestroyWindow(uint64 hWnd);
int ShowWindow(uint64 hWnd, int nCmdShow);
int UpdateWindow(uint64 hWnd);
uint16 GetKeyState(int nVirtKey);
int SetWindowPos(uint64 hWnd, uint64 hWndInsertAfter, int X, int Y, int cx, int cy, uint uFlags);
uint64 GetDC(uint64 hWnd);
int GetCaretPos(Point& lpPoint);
uint64 GetDesktopWindow();
int ReleaseDC(uint64 hWnd, uint64 hDC);
int GetSystemMetrics(int nIndex);
int ClientToScreen(uint64 hWnd, Point& lpPoint);
int ScreenToClient(uint64 hWnd, Point& lpPoint);
int CreateCaret(uint64 hWnd, uint64 hBitmap, int nWidth, int nHeight);
int SetCaretPos(int X, int Y);
int ShowCaret(uint64 hWnd);
int DestroyCaret();
int GetClassName(uint64 hWnd, uint64 lpClassName, int nMaxCount);
uint64 FindWindow(uint64 lpClassName, uint64 lpWindowName);
int IsWindowVisible(uint64 hWnd);
int PeekMessage(MSG& lpMsg, uint64 hWnd, uint wMsgFilterMin, uint wMsgFilterMax, uint wRemoveMsg);
uint64 DialogBoxIndirectParam(uint64 hInstance, uint64 hDialogTemplate, uint64 hWndParent, uint64 lpDialogFunc, uint64 dwInitParam);
int EndDialog(uint64 hDlg, uint64 nResult);
int GetWindowRect(uint64 hWnd, Rect& lpRect);
uint64 CreateWindowEx(uint dwExStyle, uint64 lpClassName, uint64 lpWindowName, uint dwStyle, int X, int Y, int nWidth, int nHeight, uint64 hWndParent, uint64 hMenu, uint64 hInstance, uint64 lpParam);
int MoveWindow(uint64 hWnd, int X, int Y, int nWidth, int nHeight, int bRepaint);
int GetClientRect(uint64 hWnd, Rect& lpRect);
int AdjustWindowRectEx(Rect& lpRect, uint dwStyle, int bMenu, uint dwExStyle);
int GetWindowLong(uint64 hWnd, int nIndex);
int DefWindowProc(uint64 hWnd, uint msg, int wParam, int lParam);
int TranslateMessage(MSG& lpMsg);
uint64 CreateFontIndirect(LOGFONT& lplf);
uint64 SelectObject(uint64 hdc, uint64 h);
int GetTextExtentPoint32(uint64 hdc, uint lpString, int c, Size&);
int DeleteObject(uint64 ho);
int GetDeviceCaps(uint64 hdc, int index);
uint64 GetStockObject(int i);
int GetObjectW(uint64 h, uint c, uint64 pv);
int EnumFontFamiliesEx(uint64 hdc, LOGFONT& lpLogfont, uint64 lpProc, NoCaseMap<int>&, uint dwFlags);
void Sleep(uint);
uint GetTickCount();
int VirtualProtect(uint64 address, uint size, uint newProtect, uint& oldProtect);
int MultiByteToWideChar(uint CodePage, uint dwFlags, uint64 lpMultiByteStr, int cbMultiByte, uint64 lpWideCharStr, int cchWideChar);
int WideCharToMultiByte(uint CodePage, uint dwFlags, uint64 lpWideCharStr, int cchWideChar, uint64 lpMultiByteStr, int cbMultiByte, uint lpDefaultChar, bool& lpUsedDefaultChar);
uint64 GetCommandLine();
uint ExpandEnvironmentStrings(uint64 lpSrc, uint64 buffer, uint nSize);
uint GetTempPath(uint nBufferLength, uint64 lpBuffer);
int CreateDirectory(uint64 lpPathName, uint64 = 0);
uint64 LoadLibraryEx(uint64 lpLibFileName, uint64 = 0, uint dwFlags = 0);
uint64 GetProcAddress(uint64 hModule, uint64 lpProcName);
void DebugBreak();
uint64 GetModuleHandle(uint64 lpModuleName);
uint GetLastError();
IDispatch&& createDispatchFromAS(?&);
IDispatch&& getEnumsDispatch();
void setComException(const string& description);
IUnknown&& AStoIUnknown(?&, const Guid&);
uint64 ThunkToFunc(?&, int callType = asCALL_STDCALL);
void initActiveScriptSubsystem(uint64 hMainWindow, const string& nameOfInstance);
void unloadDelayedScripts();
string findFullPath(const string& path);
string getEngineNameByFileExt(const string& ext);
ASWnd&& attachWndToFunction(uint64 hWnd, WndFunc&& handler, const array<uint>& messages);
void sortItemsArray(?& itemsArray, bool asc);
void screenGeometry(uint64 hwnd, Rect& rect);
void getLogFontSizes(LOGFONT& logFont, Size& size);
ParseMethodResult&& parseMethodText(uint64 text, uint firstLineNum, uint firstLexem = 0, uint allowedPreprocContextes = uint ( - 1 ));
ModuleStruct&& parseModuleText(uint textPtr, uint startAllowedPreproc = uint ( - 1 ));
uint preprocContextesToAccessModes(uint ppc);
uint execContextName(uint type, int lang);
uint parseDirective(const lexem& lex);
string getPreviousCommentBlock(uint startPos, uint64 beginOfBuffer, uint maxLine = 5);
void parseKeyword(lexem& lex);
uint64 addHotKey(uint hotKey, HotKeyHandler&& handler);
uint64 addTempHotKey(uint hotKey, HotKeyHandler&& handler);
void removeHotKey(uint id);
void clearAllHotKeys();
string hotKeyPresentation(uint hotkey);
uint64 setTimer(uint msec, TimerProc&& handler);
void removeTimer(uint64 timerID);
IBkEndUI&& toIBkEndUI(uint64);
MyMessageHandler&& toMyMessageHandler(uint64);
ICtx2Disp&& toICtx2Disp(uint64);
ICommandState&& toICommandState(uint64);
ICommandTarget&& toICommandTarget(uint64);
ICommandReceiver&& toICommandReceiver(uint64);
IListCmdState&& toIListCmdState(uint64);
ICmdSateImpl&& toICmdSateImpl(uint64);
ICmdDescription&& toICmdDescription(uint64);
ICommandService&& toICommandService(uint64);
IV8DataSource&& toIV8DataSource(uint64);
IGridUISource&& toIGridUISource(uint64);
IGrid&& toIGrid(uint64);
IV8Bookmark&& toIV8Bookmark(uint64);
ICalcValueCreator&& toICalcValueCreator(uint64);
IExecutionStateMediumInStream&& toIExecutionStateMediumInStream(uint64);
IExternalCalculatorDebugger&& toIExternalCalculatorDebugger(uint64);
IExternalCalculatorOwner&& toIExternalCalculatorOwner(uint64);
IDebugger&& toIDebugger(uint64);
IDebugService&& toIDebugService(uint64);
IPersistableDocument&& toIPersistableDocument(uint64);
IDocument&& toIDocument(uint64);
IPersistableObject&& toIPersistableObject(uint64);
IOutPersistenceStorage&& toIOutPersistenceStorage(uint64);
IInPersistenceStorage&& toIInPersistenceStorage(uint64);
IStreamPersistenceStorage&& toIStreamPersistenceStorage(uint64);
IDocumentSink&& toIDocumentSink(uint64);
IEventRecipient&& toIEventRecipient(uint64);
IEventService&& toIEventService(uint64);
IIdleService&& toIIdleService(uint64);
IIdleHandler&& toIIdleHandler(uint64);
IAppExitCancel&& toIAppExitCancel(uint64);
IFileSystem&& toIFileSystem(uint64);
IFile&& toIFile(uint64);
IFileEx&& toIFileEx(uint64);
IStorageRW&& toIStorageRW(uint64);
IUnpackFile&& toIUnpackFile(uint64);
ITempFile&& toITempFile(uint64);
IDocumentFactory&& toIDocumentFactory(uint64);
ILangSettings&& toILangSettings(uint64);
ICustomFormDesigner&& toICustomFormDesigner(uint64);
ICopyHelperCreator&& toICopyHelperCreator(uint64);
ICustomForm&& toICustomForm(uint64);
ICustomFormLoader&& toICustomFormLoader(uint64);
IRuntimeModule&& toIRuntimeModule(uint64);
IForm&& toIForm(uint64);
IFormCtrl&& toIFormCtrl(uint64);
IFormDialog&& toIFormDialog(uint64);
IMDEditService&& toIMDEditService(uint64);
IInfoBaseService&& toIInfoBaseService(uint64);
IMDService&& toIMDService(uint64);
IConfigMngrUI&& toIConfigMngrUI(uint64);
ITypesInfoProvider&& toITypesInfoProvider(uint64);
IDataProviderInfo&& toIDataProviderInfo(uint64);
IMDObject&& toIMDObject(uint64);
IMDContainer&& toIMDContainer(uint64);
IMDParentLink&& toIMDParentLink(uint64);
IMDClass&& toIMDClass(uint64);
IConfigMngr&& toIConfigMngr(uint64);
IConfigMngrUIOwner&& toIConfigMngrUIOwner(uint64);
IInfoBase&& toIInfoBase(uint64);
IMDEditHelper&& toIMDEditHelper(uint64);
IMDBaseObj&& toIMDBaseObj(uint64);
ILocalString&& toILocalString(uint64);
IMDEditModuleHelper&& toIMDEditModuleHelper(uint64);
IMDTypedObj&& toIMDTypedObj(uint64);
IMDExtObj&& toIMDExtObj(uint64);
IImage&& toIImage(uint64);
IV8Picture&& toIV8Picture(uint64);
IGlyph&& toIGlyph(uint64);
IV8PictureValue&& toIV8PictureValue(uint64);
SCOM_Process&& toSCOM_Process(uint64);
IGlobalContext&& toIGlobalContext(uint64);
IGlobalContextInit&& toIGlobalContextInit(uint64);
IProfileFolder&& toIProfileFolder(uint64);
IProfileService&& toIProfileService(uint64);
IProfileSource&& toIProfileSource(uint64);
IPropertyService&& toIPropertyService(uint64);
IControlDesign&& toIControlDesign(uint64);
ITextManager&& toITextManager(uint64);
ITextEditor&& toITextEditor(uint64);
ITextManager_Operations&& toITextManager_Operations(uint64);
ITextParserCache&& toITextParserCache(uint64);
ITxtEdtOptions&& toITxtEdtOptions(uint64);
IModuleEdit&& toIModuleEdit(uint64);
ISourceLexer&& toISourceLexer(uint64);
ITxtEdtExtender&& toITxtEdtExtender(uint64);
ITxtEdtService&& toITxtEdtService(uint64);
ITemplateProcessor&& toITemplateProcessor(uint64);
IEdit&& toIEdit(uint64);
IDataControl&& toIDataControl(uint64);
IDataControlEx&& toIDataControlEx(uint64);
IFldEdit&& toIFldEdit(uint64);
IControlContext&& toIControlContext(uint64);
IOutlineCoords&& toIOutlineCoords(uint64);
ITEIntelliSence&& toITEIntelliSence(uint64);
IV8Color&& toIV8Color(uint64);
ITextExtBackColors&& toITextExtBackColors(uint64);
ITextExtColors&& toITextExtColors(uint64);
ITextExtention&& toITextExtention(uint64);
TextManager&& toTextManager(uint64);
ITypeContextInfo&& toITypeContextInfo(uint64);
ITypeNameInfo&& toITypeNameInfo(uint64);
ISettingsConsumer&& toISettingsConsumer(uint64);
IContextDef&& toIContextDef(uint64);
IContext&& toIContext(uint64);
IAssistantData&& toIAssistantData(uint64);
IContextDefExt&& toIContextDefExt(uint64);
IAssistListInfo&& toIAssistListInfo(uint64);
IAssistList&& toIAssistList(uint64);
IType&& toIType(uint64);
IValue&& toIValue(uint64);
IEnumValCreator&& toIEnumValCreator(uint64);
IIndexedCollectionRO&& toIIndexedCollectionRO(uint64);
IIndexedCollectionFS&& toIIndexedCollectionFS(uint64);
IValueArray&& toIValueArray(uint64);
IVTColumnRO&& toIVTColumnRO(uint64);
IVTColumn&& toIVTColumn(uint64);
IVTRowRO&& toIVTRowRO(uint64);
IVTRow&& toIVTRow(uint64);
IValueTableBaseRO&& toIValueTableBaseRO(uint64);
IValueTableBase&& toIValueTableBase(uint64);
IValueTableColumns&& toIValueTableColumns(uint64);
IValueTable&& toIValueTable(uint64);
IValueSubTree&& toIValueSubTree(uint64);
IValueTreeRow&& toIValueTreeRow(uint64);
IValueTree&& toIValueTree(uint64);
IValueStructure&& toIValueStructure(uint64);
IView&& toIView(uint64);
IWindowView&& toIWindowView(uint64);
IFramedView&& toIFramedView(uint64);
IDocumentView&& toIDocumentView(uint64);
ITopLevelFrame&& toITopLevelFrame(uint64);
IWindow&& toIWindow(uint64);
ITopLevelFrameCore&& toITopLevelFrameCore(uint64);
IContainedObject&& toIContainedObject(uint64);
IClientSite&& toIClientSite(uint64);
IContainer&& toIContainer(uint64);
IFramedViewSite&& toIFramedViewSite(uint64);
IViewContext&& toIViewContext(uint64);
IViewLayouter&& toIViewLayouter(uint64);
ITabbedLayouter&& toITabbedLayouter(uint64);
IViewSplitter&& toIViewSplitter(uint64);
IMDIClient&& toIMDIClient(uint64);
IFormViewCore&& toIFormViewCore(uint64);
Window&& toWindow(uint64);
mbpRef&& tombp(uint64);
SelectFileNameRef&& toSelectFileName(uint64);
CommandIDRef&& toCommandID(uint64);
CommandRef&& toCommand(uint64);
KeyAccelRef&& toKeyAccel(uint64);
CompositeIDRef&& toCompositeID(uint64);
LineInfoRef&& toLineInfo(uint64);
ImageInfoRef&& toImageInfo(uint64);
CellFormatRef&& toCellFormat(uint64);
DocSinkRef&& toDocSink(uint64);
StorageFileInfoRef&& toStorageFileInfo(uint64);
FileExceptionRef&& toFileException(uint64);
FontRef&& toFont(uint64);
MDPropertyRef&& toMDProperty(uint64);
FieldInfoRef&& toFieldInfo(uint64);
MDEventInfoRef&& toMDEventInfo(uint64);
TypeInfoRef&& toTypeInfo(uint64);
MDTreeItemInfoRef&& toMDTreeItemInfo(uint64);
V8PictureRef&& toV8Picture(uint64);
GlyphRef&& toGlyph(uint64);
ExceptionRef&& toException(uint64);
Sci_CharacterRangeRef&& toSci_CharacterRange(uint64);
Sci_TextRangeRef&& toSci_TextRange(uint64);
Sci_TextToFindRef&& toSci_TextToFind(uint64);
Sci_RectangleRef&& toSci_Rectangle(uint64);
Sci_NotifyHeaderRef&& toSci_NotifyHeader(uint64);
SCNotificationRef&& toSCNotification(uint64);
VectorRef&& toVector(uint64);
v8strDataRef&& tov8strData(uint64);
v8stringRef&& tov8string(uint64);
ColorRef&& toColor(uint64);
SyntaxItemInfoRef&& toSyntaxItemInfo(uint64);
SyntaxItemInfosRef&& toSyntaxItemInfos(uint64);
BackColorsItemRef&& toBackColorsItem(uint64);
TextPositionRef&& toTextPosition(uint64);
LocalWStringRef&& toLocalWString(uint64);
TypeDomainPatternRef&& toTypeDomainPattern(uint64);
TypeContextInfoItemRef&& toTypeContextInfoItem(uint64);
TypeNameInfoRef&& toTypeNameInfo(uint64);
ContextValueInfoRef&& toContextValueInfo(uint64);
URLRef&& toURL(uint64);
DateRef&& toDate(uint64);
NumericRef&& toNumeric(uint64);
ValueRef&& toValue(uint64);
TypeRef&& toType(uint64);
VTColumnInfoRef&& toVTColumnInfo(uint64);
StructKeysRef&& toStructKeys(uint64);
ViewContextListNodeRef&& toViewContextListNode(uint64);
ViewContextListRef&& toViewContextList(uint64);
ViewPositionRef&& toViewPosition(uint64);
ViewContextRef&& toViewContext(uint64);
tagRECTRef&& totagRECT(uint64);
uint64 copy_file(IFile& dst, IFile& src, uint64 size);
SCOM_Process&& currentProcess();
void val2var(const Value&, Variant&);
v8string load_module_wstring(uint charNameModule, uint charResID);
void var2val(const Variant&, Value&, int = 0, bool = false);
uint64 malloc(uint64);
void free(uint64);
uint UnDecorateSymbolName(uint64 mangled, uint64 demangled, uint len, uint flags);
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
Guid IID_ICmdSateImpl;
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
