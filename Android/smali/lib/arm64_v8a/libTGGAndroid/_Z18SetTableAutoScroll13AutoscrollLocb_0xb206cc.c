// 函数: _Z18SetTableAutoScroll13AutoscrollLocb
// 地址: 0xb206cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1.d == 3 || arg1.d == 0)
    *(gDomClient + 0x1f8e9) = (not.d(arg2.d)).b & 1

if ((arg1.d & 0xfffffffd) == 1)
    *(gDomClient + 0x1f8e8) = (not.d(arg2.d)).b & 1
    
    if ((arg1.d & 0xfffffffe) == 2)
        *(gDomClient + 0x1f8ea) = (not.d(arg2.d)).b & 1
else if ((arg1.d & 0xfffffffe) == 2)
    *(gDomClient + 0x1f8ea) = (not.d(arg2.d)).b & 1
