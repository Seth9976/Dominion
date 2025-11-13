// 函数: _ZNSt6__ndk113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl
// 地址: 0xf42fa0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8 = zx.d(arg1[0xa0])
__builtin_memset(&arg1[0x10], 0, 0x30)

if (x8 != 0)
    void* x0 = *(arg1 + 0x40)
    
    if (x0 != 0)
        operator delete[](x0)

if (zx.d(arg1[0xa1]) != 0)
    void* x0_1 = *(arg1 + 0x68)
    
    if (x0_1 != 0)
        operator delete[](x0_1)

uint64_t entry_x2
*(arg1 + 0x60) = entry_x2

if (entry_x2 u< 9)
    uint32_t x22_1 = zx.d(arg1[0xa2])
    *(arg1 + 0x40) = &arg1[0x58]
    *(arg1 + 0x60) = 8
    arg1[0xa0] = 0
    
    if (x22_1 != 0)
        goto label_f4302c
    
label_f43058:
    uint64_t x0_4
    
    x0_4 = entry_x2 s> 8 ? entry_x2 : 8
    
    *(arg1 + 0x70) = x0_4
    
    if (arg2 == 0)
        *(arg1 + 0x68) = operator new[](x0_4)
        arg1[0xa1] = 1
    else
        *(arg1 + 0x68) = arg2
        arg1[0xa1] = 0
else
    uint32_t x22 = zx.d(arg1[0xa2])
    
    if (arg2 == 0 || x22 == 0)
        *(arg1 + 0x40) = operator new[](entry_x2)
        arg1[0xa0] = 1
        
        if (x22 != 0)
            goto label_f4302c
        
        goto label_f43058
    
    *(arg1 + 0x40) = arg2
    arg1[0xa0] = 0
label_f4302c:
    arg1[0xa1] = 0
    *(arg1 + 0x68) = 0
    *(arg1 + 0x70) = 0

return arg1
