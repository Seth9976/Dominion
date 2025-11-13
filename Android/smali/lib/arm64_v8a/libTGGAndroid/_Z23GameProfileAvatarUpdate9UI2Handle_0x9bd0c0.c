// 函数: _Z23GameProfileAvatarUpdate9UI2Handle
// 地址: 0x9bd0c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, GameProfileAvatarClick)
int64_t result = UI2SelectByName(zx.q(x19), "tblAvatar", 0xffffffff)

if (result.d != 0)
    int32_t x20_1 = result.d
    result = GameSpecific_GetAvatarRange(1)
    uint32_t x8_1 = (result u>> 0x20).d
    
    if (x8_1 s>= result.d)
        int32_t x21_1 = 0
        int32_t x26_1 = x8_1 - result.d + 1
        
        do
            int32_t x0_5 = GameSpecific_ButtonIndexToAvatar(*gProfileAvatarDlg, x21_1)
            result = UI2SelectByName(zx.q(x20_1), "tblAvatarItem", x21_1)
            
            if (result.d != 0)
                int64_t* x1_2 = &data_11cf128
                
                if (x0_5 s<= 0x165)
                    x1_2 = GameAvatarGet(zx.q(x0_5))
                
                result = UI2SetState(zx.q(result.d), x1_2, 0xffffffff, 0)
            
            x21_1 += 1
        while (x26_1 != x21_1)
    
    uint32_t x8_3 = *gProfileAvatarDlg
    
    if (x8_3 == 0)
        result = UI2SetState(zx.q(x19), &data_11cf0f8, 0xffffffff, 0)
        
        if (*gProfileAvatarDlg == 2)
            return UI2SetState(zx.q(x19), &data_11cf110, 0xffffffff, 0) __tailcall
    else if (x8_3 == 2)
        return UI2SetState(zx.q(x19), &data_11cf110, 0xffffffff, 0) __tailcall

return result
