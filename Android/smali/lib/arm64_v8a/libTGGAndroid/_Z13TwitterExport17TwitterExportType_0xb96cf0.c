// 函数: _Z13TwitterExport17TwitterExportType
// 地址: 0xb96cf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
XGetSaveGameFolder(true)
XFormatString("%sdominion.png")

if (x19 == 0)
    TwitterExportDeck(gDomClient + 0x20728, ActiveGame(), XString::operator char const*())
else
    if (x19 != 1)
        pthread_kill(pthread_self(), 6)
        return CampaignIsComplete(XNoReturn()) __tailcall
    
    TwitterExportCampaign(CampaignGetStatus(), XString::operator char const*())

return XString::~XString()
