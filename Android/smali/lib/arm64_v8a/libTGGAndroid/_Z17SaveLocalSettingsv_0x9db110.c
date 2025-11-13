// 函数: _Z17SaveLocalSettingsv
// 地址: 0x9db110
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = *gGameSettings
XGetSaveGameFolder(false)
XFormatString("%slocalsettings.xml")
DefParseTree* x0_2 = DefParseTreeMakeFromDefinition(x19, *defMapLocalSettings)

if ((DefXMLWriteFile(x0_2, *defMapLocalSettings, XString::operator char const*()) & 1) == 0)
    XString::operator char const*()
    XTrace("Failed to write file: '%s'")

DefParseTreeDelete(x0_2)
return XString::~XString()
