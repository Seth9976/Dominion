// 函数: _Z16TryAddPlayerIconR11PodIconInfo9PlayerWhoi12DomArrowTypeRK16PodIconInfoEntry
// 地址: 0xba9294
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_70 = 0
int32_t var_6c = arg2
int32_t x8 = *(arg5 + 4)
int32_t x21 = arg4
int64_t i = sx.q(*arg5)
int32_t x20 = arg2

if (i.d s< x8)
    void* __offset(PodIconInfo, 0x1008) x27_1 = arg1 + 0x1008
    
    do
        DomGfx* x23_1 = *(x27_1 + (i << 3))
        int32_t x9_3
        
        if (*(x23_1 + 0x3b0) != 1)
            x9_3 = -1
            
            if (*(x23_1 + 0x2c) == 7)
            label_ba9360:
                
                if (*(x23_1 + 0x224) == 0 && *(x23_1 + 0x228) == x20 && *(x23_1 + 0x220) == x21)
                    if (x9_3 == arg3)
                        return 
                    
                    PlayerAreaRemove(x23_1)
                    UI2Free(x23_1 + 0x2148)
                    UI2Free(x23_1 + 0x214c)
                    UI2Free(x23_1 + 0x2150)
                    UI2Free(x23_1 + 0x2154)
                    arg1 = zx.q(*(x23_1 + 0x1f90))
                    
                    if (arg1.d != 0)
                        SpineDestroy(arg1.d)
                    
                    int32_t x9_1 = *(gDomClient + 0x205f0)
                    *(gDomClient + 0x205f0) = zx.d(*(x23_1 + 0x21d0))
                    *(x23_1 + 0x21d0) = x9_1
                    *(gDomClient + 0x205f4) -= 1
                    x8 = *(arg5 + 4)
        else
            x9_3 = *(x23_1 + 0x3c4)
            
            if (*(x23_1 + 0x2c) == 7)
                goto label_ba9360
        i += 1
    while (i s< sx.q(x8))

PlayerAreaAdd(DomCreateArrow(&var_70, arg3, zx.q(x21)), zx.q(x20), arg3)
