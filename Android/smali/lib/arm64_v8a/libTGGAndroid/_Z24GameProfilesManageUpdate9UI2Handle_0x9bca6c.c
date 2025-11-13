// 函数: _Z24GameProfilesManageUpdate9UI2Handle
// 地址: 0x9bca6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, GameProfilesManageClick)
int32_t x20

if (NumProfiles() s> 3)
    x20 = 4
else
    x20 = NumProfiles()

int32_t x2

if (x20 s< 4)
    x2 = x20 + 1
else
    x2 = x20

UI2SetInt(zx.q(x19), &data_11cef78, x2, 0xffffffff)
int64_t result = GetActiveProfile()

if (x20 s>= 1)
    int64_t result_1 = result
    int64_t i = 0
    void* fp_1 = &data_11d05b8
    
    do
        if (*(fp_1 - 0x30) == "tbl_profiles" && *(fp_1 - 0x38) == x19 && i == zx.q(*(fp_1 - 0x28))
                && *(fp_1 - 0x20) == 0)
            result = UI2Exists(zx.q(*fp_1))
        
        int32_t x26_1
        
        if (*(fp_1 - 0x30) != "tbl_profiles" || *(fp_1 - 0x38) != x19 || i != zx.q(*(fp_1 - 0x28))
                || *(fp_1 - 0x20) != 0 || (result.d & 1) == 0)
            result = UI2GetHandle(zx.q(x19), "tbl_profiles", i.d)
            *fp_1 = result.d
            
            if (result.d != 0)
                x26_1 = result.d
                *(fp_1 - 0x30) = "tbl_profiles"
                *(fp_1 - 0x38) = x19
                *(fp_1 - 0x28) = i.d
                *(fp_1 - 0x20) = 0
            label_9bcb8c:
                XString* x0_6 = GetProfileBySlot(i.d)
                UI2SetText(zx.q(x26_1), &data_11cef90, x0_6, 0xffffffff)
                result =
                    UI2SetState(zx.q(x26_1), GameAvatarGet(zx.q(*(x0_6 + 0x10))), 0xffffffff, 0)
                
                if (x0_6 == result_1)
                    result = UI2SetState(zx.q(x26_1), &data_11cefa8, 0xffffffff, 0)
        else
            x26_1 = *fp_1
            
            if (x26_1 != 0)
                goto label_9bcb8c
        i += 1
        fp_1 += 0x40
    while (zx.q(x20) != i)

if (x20 s< 4)
    int64_t x23_1 = sx.q(x20)
    int32_t x0_13
    
    if (*((x23_1 << 6) + 0x11d0588) == "tbl_profiles" && *((x23_1 << 6) + 0x11d0580) == x19
            && *((x23_1 << 6) + 0x11d0590) == x20 && *((x23_1 << 6) + 0x11d0598) == 0)
        x0_13 = UI2Exists(zx.q(*((x23_1 << 6) + &data_11d05b8)))
    
    if (*((x23_1 << 6) + 0x11d0588) != "tbl_profiles" || *((x23_1 << 6) + 0x11d0580) != x19
            || *((x23_1 << 6) + 0x11d0590) != x20 || *((x23_1 << 6) + 0x11d0598) != 0
            || (x0_13 & 1) == 0)
        int32_t x0_16 = UI2GetHandle(zx.q(x19), "tbl_profiles", x20)
        *((x23_1 << 6) + &data_11d05b8) = x0_16
        
        if (x0_16 == 0)
            return UI2GetHandle(zx.q(x19), "tbl_profiles", x20) __tailcall
        
        *((x23_1 << 6) + 0x11d0588) = "tbl_profiles"
        *((x23_1 << 6) + 0x11d0580) = x19
        *((x23_1 << 6) + 0x11d0590) = x20
        *((x23_1 << 6) + 0x11d0598) = 0
        UI2GetHandle(zx.q(x19), "tbl_profiles", x20)
        return UI2SetState(zx.q(x0_16), &data_11cefc0, 0xffffffff, 0) __tailcall
    
    int32_t x21_2 = *((x23_1 << 6) + &data_11d05b8)
    result = UI2GetHandle(zx.q(x19), "tbl_profiles", x20)
    
    if (x21_2 != 0)
        return UI2SetState(zx.q(x21_2), &data_11cefc0, 0xffffffff, 0) __tailcall

return result
