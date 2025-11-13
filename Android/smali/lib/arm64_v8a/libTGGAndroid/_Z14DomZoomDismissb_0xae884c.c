// 函数: _Z14DomZoomDismissb
// 地址: 0xae884c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gDomClient + 0x1d00c) == 0)
    return 

*(gDomClient + 0x1d000) = 0
DomSoundUI_Zoom(0, false)

if (*(gDomClient + 0x1d00c) == 1)
    uint32_t x9_1 = zx.d(*(gDomClient + 0x1d01c))
    int64_t x8_2 = *(gDomClient + 0x205e0)
    
    while (true)
        uint64_t x9_2 = zx.q(x9_1) & 0xffff
        int32_t x11_2 = *(x8_2 + mulu.dp.d(x9_2.d, 0x21d8) + 0x2c)
        int32_t x19_2
        
        if (x11_2 == 3)
            x19_2 = *(x8_2 + x9_2 * 0x21d8 + 0x30)
            
            if (x19_2 != 0x70d && x19_2 != 0x718)
                x9_1 = *(x8_2 + x9_2 * 0x21d8 + 0x70)
                
                if (x9_1 != 0)
                    continue
            
            goto label_ae8940
        
        if (x11_2 == 5)
            x19_2 = *(x8_2 + x9_2 * 0x21d8 + 0x204)
        label_ae8940:
            
            if (*(GetClient() + 0x5068) == 0)
                break
        else if (x11_2 == 1)
            x19_2 = *(x8_2 + x9_2 * 0x21d8 + 0x170)
            
            if (*(GetClient() + 0x5068) == 0)
                break
        else
            if (x11_2 != 0)
                pthread_kill(pthread_self(), 6)
                DomGfx* x0_10
                bool x1_3
                x0_10, x1_3 = XNoReturn()
                return DomZoomCard(x0_10, x1_3) __tailcall
            
            x19_2 = CardWhat(gDomClient + 0x20728, zx.q(*(x8_2 + x9_2 * 0x21d8 + 0x98)))
            
            if (*(GetClient() + 0x5068) == 0)
                break
        
        if (*(GetClient() + 0x5068) == 1)
            int64_t var_18
            int32_t x0_7 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_18)
            int64_t x8_8 = sx.q(*(gDomClient + 0x205cc))
            
            if (x8_8.d s< x0_7)
                int64_t x9_4 = var_18
                
                if (x9_4 != 0 && *(x9_4 + x8_8 * 0xb0 + 0x18) == 0x12)
                    int32_t x8_10 = *(x9_4 + x8_8 * 0xb0 + 0x24)
                    
                    if (x8_10 == 0 || x19_2 == 0 || x8_10 == x19_2)
                        TutorialContinue()
        
        break

DomZoomDismissBack()
