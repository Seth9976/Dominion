// 函数: _Z25NetworkSendHttpGetFromLocP6NetLocPKcS2_
// 地址: 0xf872f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x24) = 2
*(arg1 + 0x3c) = 0x300000001
XFormatString("GET %s HTTP/1.1\r\nHost: %s\r\n\r\n")
NetBufferListAppendData(arg1 + 0x68, XString::Length(), XString::GetString())
return XString::~XString()
