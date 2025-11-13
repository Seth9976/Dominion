// 函数: _spAttachmentTimeline_apply
// 地址: 0xfaf950
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = sx.q(*(arg1 + 0x20))
int64_t* x19 = *(*(arg2 + 0x28) + (x8 << 3))

if (*(x19[1] + 0x80) == 0)
    return 

int64_t x2

if (arg5 == 0 && arg6 == 1)
label_faf994:
    x2 = *(*x19 + 0x18)
    
    if (x2 == 0)
        return spSlot_setAttachment(x19, 0, x2, arg7) __tailcall
    
    return spSlot_setAttachment(x19, 
        spSkeleton_getAttachmentForSlotIndex(arg2, zx.q(x8.d), x2, arg7)) __tailcall

int32_t* x9_3 = *(arg1 + 0x18)
arg7 = *x9_3

if (arg7 <= arg8)
    int32_t x11_2 = *(arg1 + 0x10)
    int32_t x10_2 = x11_2 - 1
    arg7 = x9_3[sx.q(x10_2)]
    
    if (not(arg7 <= arg8))
        x10_2 = 0
        int32_t x12_2 = x11_2 - 2
        
        if (x11_2 != 2)
            int32_t x11_3 = x12_2
            
            do
                int32_t x12_3 = x12_2 s>> 1
                arg7 = x9_3[sx.q(x12_3 + 1)]
                arg7 - arg8
                
                if (not(arg7 > arg8))
                    x10_2 = x12_3 + 1
                
                if (arg7 > arg8)
                    x11_3 = x12_3
                
                x12_2 = x10_2 + x11_3
            while (x10_2 != x11_3)
    
    x2 = *(*(arg1 + 0x28) + (sx.q(x10_2) << 3))
    
    if (x2 != 0)
        return spSlot_setAttachment(x19, 
            spSkeleton_getAttachmentForSlotIndex(arg2, zx.q(x8.d), x2, arg7)) __tailcall
    
    return spSlot_setAttachment(x19, 0, x2, arg7) __tailcall

if (arg5 u<= 1)
    goto label_faf994
