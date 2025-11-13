// 函数: _Z29GameSpecific_CardsetHitActionR7Cardset10CardsetIdx
// 地址: 0xb396f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result
DomKingdomEntry var_4c08
DomSetupConfig var_1a00
int128_t var_70

if (*(gDomClient + 0x82e30) == arg1)
    if (arg2.d s< 0xe)
        return CardsetZoom(arg1, arg2) __tailcall
    
    var_70 = *(gCreateDlg + (zx.q(arg2.d - 0xe) << 4) + 0x38)
    GameSetup* x0_4 = GetActiveGameSetup()
    GetKingdomConfig(x0_4)
    
    if ((GameCreateAddCard(x0_4, &var_4c08, &var_70) & 1) != 0)
        *(gCreateDlg + 0x38) = 0
        *(gCreateDlg + 0x48) = 0
        *(gCreateDlg + 0x58) = 0
        int32_t x0_8 = UI2GetHandle(GameDlgMangerGetUI(0x10, 5, true), "txt_addItem")
        UI2ClearFocus(false)
        return UI2SetFocus(zx.q(x0_8), nullptr, false)
    
    int32_t x0_21 = ExistingKingdomCards(&var_4c08, &var_1a00)
    result = FindCards(XString::operator char const*(), gCreateDlg + 0x38, 3, &var_1a00, x0_21, 
        zx.q(GetCurrentLanguage()))
    
    if (result.d s<= 2)
        int64_t x8_20 = sx.q(result.d)
        int64_t i_5
        
        if (2 != result.d)
            void* x11_3 = gCreateDlg + (x8_20 << 4)
            i_5 = (zx.q(2 - result.d) + 1) & 0x1fffffffe
            x8_20 += i_5
            void* x11_4 = x11_3 + 0x48
            int64_t i_4 = i_5
            int64_t i
            
            do
                *(x11_4 - 0x10) = 0
                *x11_4 = 0
                x11_4 += 0x20
                i = i_4
                i_4 -= 2
            while (i != 2)
        
        if (2 == result.d || zx.q(2 - result.d) + 1 != i_5)
            void* x9_11 = gCreateDlg + (x8_20 << 4) + 0x38
            int32_t i_3 = x8_20.d - 3
            int32_t i_1
            
            do
                i_1 = i_3
                i_3 += 1
                *x9_11 = 0
                x9_11 += 0x10
            while (i_1 u< 0xffffffff)
else
    int64_t x9_1 = 0
    int32_t x22_1 = *(gCardGallery + 0xc)
    char const* const x26_1 = "OOOOOO@OOOOCOOF"
    int64_t x27_1
    int32_t i_2
    
    do
        x27_1 = x9_1
        i_2 = *(&data_7ef624 + x9_1 * 0x1044)
        x9_1 = x27_1 + 1
        x26_1 = &x26_1[0x1044]
    while (i_2 != *(gCardGallery + 8))
    int64_t x21_1 = 0
    int32_t x24_1 = 0
    int32_t x28_1 = 0
    
    while (true)
        int32_t x9_3 =
            *(&data_7ef624 + x27_1 * 0x1044 + muls.dp.d(x21_1.d, 0x104) + (sx.q(x24_1) << 2) + 8)
        int64_t x8_4 = sx.q(x21_1.d)
        
        if (x9_3 == 0)
            if (*(&data_7ef624 + x27_1 * 0x1044 + x8_4 * 0x104 + 0x10c) == 0)
                break
            
            x24_1 = 0
        
        if (x9_3 == 0)
            x21_1 = x8_4 + 1
        else
            x21_1 = x8_4
        
        int64_t x19_1 = x21_1 * 0x104
        int64_t fp_1 = zx.q(x24_1) << 0x20 s>> 0x1e
        uint64_t x8_8 = 0
        int64_t x9_5
        
        if ((IsLandscape(zx.q(*(&data_7ef624 + x27_1 * 0x1044 + x19_1 + fp_1 + 8)), 0x18) & 1) != 0)
            x9_5 = 9
        else
            x9_5 = 8
        
        while (true)
            if (*(x26_1 + x19_1 + fp_1 + (x8_8 << 2)) == 0)
                if (x28_1 != x22_1)
                    x24_1 = 0
                    x8_8 = 0
                    x21_1 = zx.q(x21_1.d + 1)
                
                break
            
            x8_8 += 1
            
            if (x9_5 == x8_8)
                x8_8 = zx.q(x9_5.d)
                break
        
        if (x28_1 == x22_1)
            x21_1 =
                &data_7ef624 + x27_1 * 0x1044 + muls.dp.d(x21_1.d, 0x104) + (sx.q(x24_1) << 2) + 8
            break
        
        x28_1 += 1
        x24_1 += x8_8.d
    
    GameSetup* x0_2 = GetActiveGameSetup()
    result = GetKingdomConfig(x0_2)
    uint64_t x1 = zx.q(arg2.d)
    int32_t x8_12 = *gCardGallery
    int32_t x22_2 = *(x21_1 + (sx.q(x1.d) << 2))
    
    if (x8_12 == 1)
        result = CardsetZoom(arg1, x1)
        x8_12 = *gCardGallery
    
    if (x8_12 == 0)
        int32_t var_1a04
        int32_t x0_11 = CardsetIsZoomed(*(gDomClient + 0x82e28), &var_1a04)
        result = DomDefGet(zx.q(x22_2), 0x18)
        
        if ((x0_11 & 1) == 0 && (*(result + 0xc8) & 0x3028047200800) == 0)
            int32_t x0_14 = ExistingKingdomCards(&var_1a00, &var_4c08)
            
            if (x0_14 s>= 1)
                uint64_t x8_17 = zx.q(x0_14)
                void* x9_6 = &var_4c08 | 4
                
                while (true)
                    int32_t x10_7 = *(x9_6 - 4)
                    
                    if (x10_7 == 1)
                        if (*x9_6 == x22_2)
                            var_70.d = 1
                            var_70:4.d = x22_2
                            var_70:8.d = 0
                            GameCreateRemoveCard(x0_2, &var_1a00, &var_70)
                            break
                    else if (x10_7 == 0)
                        goto label_b399fc
                    
                    uint64_t temp2_1 = x8_17
                    x8_17 -= 1
                    x9_6 += 0x10
                    
                    if (temp2_1 == 1)
                        goto label_b399fc
                
                return SoundPlay(*SOUND_SOUND_LOAD_ALWAYS_UI_SELECT_CARD_TOGGLE_OFF)
            
        label_b399fc:
            int32_t var_1888
            
            if (*(GetClient() + 0x5068) != 0)
                if ((IsLandscape(zx.q(x22_2), zx.q(*(ActiveGame() + 0x30))) & 1) != 0
                        && var_1888 == 0)
                    goto label_b39b60
                
                goto label_b39b08
            
            if ((IsLandscape(zx.q(x22_2), 0x18) & 1) != 0 && var_1888 == 0)
            label_b39b60:
                var_70.d = 1
                var_70:4.d = x22_2
                var_70:8.d = 0
                GameCreateAddCard(x0_2, &var_1a00, &var_70)
                return SoundPlay(*SOUND_SOUND_LOAD_ALWAYS_UI_SELECT_CARD_TOGGLE_ON)
            
        label_b39b08:
            
            if (*(GetClient() + 0x5068) == 0)
                result = IsLandscape(zx.q(x22_2), 0x18)
                
                if ((result.d & 1) == 0)
                label_b39b3c:
                    int32_t var_1970
                    
                    if (var_1970 == 0)
                        goto label_b39b60
            else
                result = IsLandscape(zx.q(x22_2), zx.q(*(ActiveGame() + 0x30)))
                
                if ((result.d & 1) == 0)
                    goto label_b39b3c
return result
