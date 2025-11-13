// 函数: _Z16GameProfilesSaveP15ProfileSettings
// 地址: 0x9dd8ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GameProfile_Save var_2240
memset(&var_2240, 0, 0x2200)
ProfileEntitlment_Save var_7240
memset(&var_7240, 0, 0x5000)
DLCType var_7a40
memset(&var_7a40, 0, 0x800)
DomSaveSet_Save var_9240
memset(&var_9240, 0, 0x1800)
void var_9a40
memset(&var_9a40, 0, 0x800)
void var_21a40
memset(&var_21a40, 0, 0x18000)
void var_31a40
memset(&var_31a40, 0, 0x10000)
DailyGameReference_save* x0_7
ProfileAchievement_Save* x3
RecommendedSetResult* x5
x0_7, x3, x5 = XCalloc(0x11d280)
void* var_34c70 = &var_21a40
void var_34c40
void* var_34c68 = &var_34c40
void* var_34c80 = &var_9a40
void* var_34c78 = &var_31a40
ToSave(arg1, &var_2240, &var_7240, x3, &var_9240, x5, &var_7a40, x0_7)
XGetSaveGameFolder(false)
XFormatString("%sprofiles.xml")
void var_34c58
DefParseTree* x0_11 = DefParseTreeMakeFromDefinition(&var_34c58, *defMapProfileSettings)

if ((DefXMLWriteFile(x0_11, *defMapProfileSettings, XString::operator char const*()) & 1) == 0)
    XString::operator char const*()
    XTraceAndLog("Failed to write file: '%s'")

DefParseTreeDelete(x0_11)
XFree(x0_7)
return XString::~XString()
