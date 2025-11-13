// 函数: sub_100d7ec
// 地址: 0x100d7ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = *(arg1 + 0xc)

if ((i & 0x80000000) != 0)
label_100da20:
    return sub_100da24(__assert2(
        "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 0x478, 
        "void stbtt__buf_seek(stbtt__buf *, int)", "!(o > b->size || o < 0)")) __tailcall

int64_t* x21_1 = arg1
*(arg1 + 8) = 0
int64_t var_40
uint64_t var_38
uint64_t x8
int64_t x10_5

if (i == 0)
    x10_5 = *x21_1
else
    int32_t i_4 = 0
    uint64_t i_2
    
    do
        int32_t i_1
        uint32_t x11_3
        
        if (i_4 s>= i)
            x11_3 = 0
            i_2 = zx.q(i_4)
            i_1 = i_4
        else
            i_1 = i_4
            
            while (true)
                void* x12_1 = *x21_1
                int64_t i_3 = sx.q(i_1)
                uint32_t x10_1 = zx.d(*(x12_1 + i_3))
                
                if (x10_1 u< 0x1c)
                    i_2 = i_3 + 1
                    x21_1[1].d = i_2.d
                    x11_3 = zx.d(*(x12_1 + i_3))
                    
                    if (x11_3 == 0xc)
                        uint32_t x11_4
                        
                        if (i_2.d s>= i)
                            x11_4 = 0
                        else
                            x21_1[1].d = i_1 + 2
                            x11_4 = zx.d(*(x12_1 + i_2))
                            i_2 = zx.q(i_1 + 2)
                        
                        x11_3 = x11_4 | 0x100
                    
                    break
                
                if (x10_1 != 0x1e)
                    sub_100d500(x21_1)
                    i_1 = x21_1[1].d
                    i = *(x21_1 + 0xc)
                else
                    if (i_1 s<= 0xfffffffe)
                        goto label_100da20
                    
                    x21_1[1].d = i_1 + 1
                    
                    if (i_1 + 1 s>= i)
                        i_1 += 1
                    else
                        uint64_t x13_1 = zx.q(i_1 + 1)
                        i_1 += 2
                        int64_t x10_3 = sx.q(i) - x13_1
                        void* x11_2 = x12_1 + x13_1
                        
                        while (true)
                            x21_1[1].d = i_1
                            uint32_t x12_2 = zx.d(*x11_2)
                            
                            if ((not.d(x12_2) & 0xf) == 0)
                                break
                            
                            if ((x12_2 & 0xf0) == 0xf0)
                                break
                            
                            i_1 += 1
                            int64_t temp0_1 = x10_3
                            x10_3 -= 1
                            x11_2 += 1
                            
                            if (temp0_1 == 1)
                                x11_3 = 0
                                i_2 = zx.q(i)
                                i_1 = i
                                goto label_100d8e4
                
                if (i_1 s>= i)
                    x11_3 = 0
                    i_2 = zx.q(i_1)
                    break
        
    label_100d8e4:
        
        if (x11_3 == arg2)
            uint64_t x11_5 = zx.q(i_1 - i_4)
            
            if (((x11_5.d | i_4) & 0x80000000) != 0)
                goto label_100d990
            
            x10_5 = 0
            
            if (i s< i_4)
                x8 = 0
                var_40 = 0
                var_38 = 0
                
                if (arg3 s>= 1)
                    goto label_100d9a8
                
                goto label_100d9ec
            
            x8 = 0
            
            if (i s< i_1)
                goto label_100d99c
            
            x8 = x11_5 << 0x20
            var_40 = *x21_1 + sx.q(i_4)
            var_38 = x8
            
            if (arg3 s>= 1)
                goto label_100d9a8
            
            goto label_100d9ec
        
        i_4 = i_2.d
    while (i_2.d s< i)
    
    if ((i & 0x80000000) != 0)
    label_100d990:
        x10_5 = 0
    else
        x10_5 = *x21_1

x8 = 0
label_100d99c:
var_40 = x10_5
var_38 = 0

if (arg3 s>= 1)
label_100d9a8:
    
    if ((x8 u>> 0x20).d s>= 1)
        int64_t x21_2 = 0
        
        do
            *(arg4 + (x21_2 << 2)) = sub_100d500(&var_40).d
            x21_2 += 1
            
            if (x21_2 u>= zx.q(arg3))
                break
        while (var_38.d s< var_38:4.d)

label_100d9ec:
