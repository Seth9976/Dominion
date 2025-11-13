// 函数: _Z15DomGainResource11DomResource9PlayerWho6CardIDibb
// 地址: 0xb4b004
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = zx.q(arg1)
int64_t (* x8_1)()

if (arg2 == 0xffffffff)
    x8_1 = gDomClient + 0x48
else
    x8_1 = gDomClient + 0x48 + muls.dp.d(arg2, 0x4d48)

uint64_t x9_1 = x25 << 2
int32_t x23 = arg6.d
int32_t x22 = arg5.d
int32_t x21 = arg1
*(x8_1 + x9_1) += arg4
uint64_t result = GameMainUI()
int32_t x20 = result.d

if ((x23 & 1) != 0 && (x22 & 1) == 0)
    result = DomSoundResource(zx.q(arg2), zx.q(x21), arg4)

void* x21_2
char* x21_6
void* x22_2
void* x23_1

if (x20 != 0 && (x23 & 1) != 0 && (x22 & 1) == 0 && x21 u<= 3)
    switch (x25)
        case 0
            x23_1 = &data_1817228 + (x25 << 6)
            x22_2 = x23_1 + 8
            int32_t x0_2
            
            if (*x22_2 == "anim_coin" && *(&data_1817228 + (x25 << 6)) == x20
                    && *((x25 << 6) + 0x1817238) == 0xffffffff)
                x21_2 = (x25 << 6) + 0x1817260
                x0_2 = UI2Exists(zx.q(*x21_2))
            
            if (*x22_2 == "anim_coin" && *(&data_1817228 + (x25 << 6)) == x20
                && *((x25 << 6) + 0x1817238) == 0xffffffff && (x0_2 & 1) != 0)
            label_b4b208:
                result = zx.q(*x21_2)
                
                if (result.d != 0)
                    goto label_b4b250
            else
                x21_6 = "anim_coin"
            label_b4b224:
                result = UI2GetHandle(zx.q(x20), x21_6)
                *(x23_1 + 0x38) = result.d
                
                if (result.d != 0)
                    *x22_2 = x21_6
                    *(&data_1817228 + (x25 << 6)) = x20
                    *((x25 << 6) + 0x1817238) = 0xffffffff
                label_b4b250:
                    char* x1_2
                    
                    if (arg4 s< 1)
                        x1_2 = "lose_resource"
                    else
                        x1_2 = "gain_resource"
                    
                    return UI2SetStateEffect(result, x1_2, 1, true) __tailcall
        case 1
            x23_1 = &data_1817228 + (x25 << 6)
            x22_2 = x23_1 + 8
            int32_t x0_4
            
            if (*x22_2 == "anim_action" && *(&data_1817228 + (x25 << 6)) == x20
                    && *((x25 << 6) + 0x1817238) == 0xffffffff)
                x21_2 = (x25 << 6) + 0x1817260
                x0_4 = UI2Exists(zx.q(*x21_2))
            
            if (*x22_2 == "anim_action" && *(&data_1817228 + (x25 << 6)) == x20
                    && *((x25 << 6) + 0x1817238) == 0xffffffff && (x0_4 & 1) != 0)
                goto label_b4b208
            
            x21_6 = "anim_action"
            goto label_b4b224
        case 2
            x23_1 = &data_1817228 + (x25 << 6)
            x22_2 = x23_1 + 8
            int32_t x0_6
            
            if (*x22_2 == "anim_buy" && *(&data_1817228 + (x25 << 6)) == x20
                    && *((x25 << 6) + 0x1817238) == 0xffffffff)
                x21_2 = (x25 << 6) + 0x1817260
                x0_6 = UI2Exists(zx.q(*x21_2))
            
            if (*x22_2 == "anim_buy" && *(&data_1817228 + (x25 << 6)) == x20
                    && *((x25 << 6) + 0x1817238) == 0xffffffff && (x0_6 & 1) != 0)
                goto label_b4b208
            
            x21_6 = "anim_buy"
            goto label_b4b224
        case 3
            x23_1 = &data_1817228 + (x25 << 6)
            x22_2 = x23_1 + 8
            int32_t x0_8
            
            if (*x22_2 == "anim_potion" && *(&data_1817228 + (x25 << 6)) == x20
                    && *((x25 << 6) + 0x1817238) == 0xffffffff)
                x21_2 = (x25 << 6) + 0x1817260
                x0_8 = UI2Exists(zx.q(*x21_2))
            
            if (*x22_2 == "anim_potion" && *(&data_1817228 + (x25 << 6)) == x20
                    && *((x25 << 6) + 0x1817238) == 0xffffffff && (x0_8 & 1) != 0)
                goto label_b4b208
            
            x21_6 = "anim_potion"
            goto label_b4b224
return result
