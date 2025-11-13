// 函数: sub_6b48d0
// 地址: 0x6b48d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
uint32_t result

if (arg1 == 0)
    sub_63b870(result, &data_801800, "c0 != 0", "C:\x\ax2017\Engine\Font.cpp", 0x316, "CanBreak")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (arg1 s> 0x3001)
    if (arg1 - 0x3002 u> 0xe5)
    label_6b4916:
        
        if (arg1 - 0x3000 u<= 0x3f || arg1 - 0x3040 u<= 0x5f || arg1 - 0x30a0 u<= 0x5f
                || arg1 - 0xff00 u<= 0xef || arg1 - 0x4e00 u<= 0x51af)
            result.b = 1
            return result
        
        result.b = 0
        return result
    
    switch (arg1)
        case 0x3002, 0x300d, 0x3041, 0x3043, 0x3045, 0x3047, 0x3049, 0x3063, 0x3083, 0x3085, 
                0x3087, 0x30a1, 0x30a3, 0x30a5, 0x30a7, 0x30a9, 0x30c3, 0x30e3, 0x30e5, 0x30e7
            result.b = 0
            return result
        case 0x3003, 0x3004, 0x3005, 0x3006, 0x3007, 0x3008, 0x3009, 0x300a, 0x300b, 0x300e, 
                0x300f, 0x3010, 0x3011, 0x3012, 0x3013, 0x3014, 0x3015, 0x3016, 0x3017, 0x3018, 
                0x3019, 0x301a, 0x301b, 0x301c, 0x301d, 0x301e, 0x301f, 0x3020, 0x3021, 0x3022, 
                0x3023, 0x3024, 0x3025, 0x3026, 0x3027, 0x3028, 0x3029, 0x302a, 0x302b, 0x302c, 
                0x302d, 0x302e, 0x302f, 0x3030, 0x3031, 0x3032, 0x3033, 0x3034, 0x3035, 0x3036, 
                0x3037, 0x3038, 0x3039, 0x303a, 0x303b, 0x303c, 0x303d, 0x303e, 0x303f, 0x3040, 
                0x3042, 0x3044, 0x3046, 0x3048, 0x304a, 0x304b, 0x304c, 0x304d, 0x304e, 0x304f, 
                0x3050, 0x3051, 0x3052, 0x3053, 0x3054, 0x3055, 0x3056, 0x3057, 0x3058, 0x3059, 
                0x305a, 0x305b, 0x305c, 0x305d, 0x305e, 0x305f, 0x3060, 0x3061, 0x3062, 0x3064, 
                0x3065, 0x3066, 0x3067, 0x3068, 0x3069, 0x306a, 0x306b, 0x306c, 0x306d, 0x306e, 
                0x306f, 0x3070, 0x3071, 0x3072, 0x3073, 0x3074, 0x3075, 0x3076, 0x3077, 0x3078, 
                0x3079, 0x307a, 0x307b, 0x307c, 0x307d, 0x307e, 0x307f, 0x3080, 0x3081, 0x3082, 
                0x3084, 0x3086, 0x3088, 0x3089, 0x308a, 0x308b, 0x308c, 0x308d, 0x308e, 0x308f, 
                0x3090, 0x3091, 0x3092, 0x3093, 0x3094, 0x3095, 0x3096, 0x3097, 0x3098, 0x3099, 
                0x309a, 0x309b, 0x309c, 0x309d, 0x309e, 0x309f, 0x30a0, 0x30a2, 0x30a4, 0x30a6, 
                0x30a8, 0x30aa, 0x30ab, 0x30ac, 0x30ad, 0x30ae, 0x30af, 0x30b0, 0x30b1, 0x30b2, 
                0x30b3, 0x30b4, 0x30b5, 0x30b6, 0x30b7, 0x30b8, 0x30b9, 0x30ba, 0x30bb, 0x30bc, 
                0x30bd, 0x30be, 0x30bf, 0x30c0, 0x30c1, 0x30c2, 0x30c4, 0x30c5, 0x30c6, 0x30c7, 
                0x30c8, 0x30c9, 0x30ca, 0x30cb, 0x30cc, 0x30cd, 0x30ce, 0x30cf, 0x30d0, 0x30d1, 
                0x30d2, 0x30d3, 0x30d4, 0x30d5, 0x30d6, 0x30d7, 0x30d8, 0x30d9, 0x30da, 0x30db, 
                0x30dc, 0x30dd, 0x30de, 0x30df, 0x30e0, 0x30e1, 0x30e2, 0x30e4, 0x30e6
            goto label_6b4916
        case 0x300c
            result.b = 1
            return result
else
    if (arg1 == 0x3001)
        result.b = 0
        return result
    
    if (arg1 - 9 u> 0x72)
        goto label_6b4916
    
    switch (arg1 + &jump_table_6b4984[0]:3)
        case &lookup_table_6b4990, &lookup_table_6b4990[1], &lookup_table_6b4990[4], 
                &lookup_table_6b4990[0x17], &lookup_table_6b4990[0x1f], &lookup_table_6b4990[0x72]
            result.b = 1
            return result
        case &lookup_table_6b4990[2], &lookup_table_6b4990[3], &lookup_table_6b4990[5], 
                &lookup_table_6b4990[6], &lookup_table_6b4990[7], &lookup_table_6b4990[8], 
                &lookup_table_6b4990[9], &lookup_table_6b4990[0xa], &lookup_table_6b4990[0xb], 
                &lookup_table_6b4990[0xc], &lookup_table_6b4990[0xd], &lookup_table_6b4990[0xe], 
                &lookup_table_6b4990[0xf], &lookup_table_6b4990[0x10], &lookup_table_6b4990[0x11], 
                &lookup_table_6b4990[0x12], &lookup_table_6b4990[0x13], &lookup_table_6b4990[0x14], 
                &lookup_table_6b4990[0x15], &lookup_table_6b4990[0x16], &lookup_table_6b4990[0x18], 
                &lookup_table_6b4990[0x19], &lookup_table_6b4990[0x1a], &lookup_table_6b4990[0x1b], 
                &lookup_table_6b4990[0x1c], &lookup_table_6b4990[0x1d], &lookup_table_6b4990[0x1e], 
                &lookup_table_6b4990[0x21], &lookup_table_6b4990[0x22], &lookup_table_6b4990[0x23], 
                &lookup_table_6b4990[0x24], &lookup_table_6b4990[0x25], &lookup_table_6b4990[0x26], 
                &lookup_table_6b4990[0x27], &lookup_table_6b4990[0x28], &lookup_table_6b4990[0x29], 
                &lookup_table_6b4990[0x2a], &lookup_table_6b4990[0x2b], &lookup_table_6b4990[0x2c], 
                &lookup_table_6b4990[0x2d], &lookup_table_6b4990[0x2e], &lookup_table_6b4990[0x2f], 
                &lookup_table_6b4990[0x30], &lookup_table_6b4990[0x31], &lookup_table_6b4990[0x32], 
                &lookup_table_6b4990[0x33], &lookup_table_6b4990[0x34], &lookup_table_6b4990[0x35], 
                &lookup_table_6b4990[0x36], &lookup_table_6b4990[0x37], &lookup_table_6b4990[0x38], 
                &lookup_table_6b4990[0x39], &lookup_table_6b4990[0x3a], &lookup_table_6b4990[0x3b], 
                &lookup_table_6b4990[0x3c], &lookup_table_6b4990[0x3d], &lookup_table_6b4990[0x3e], 
                &lookup_table_6b4990[0x3f], &lookup_table_6b4990[0x40], &lookup_table_6b4990[0x41], 
                &lookup_table_6b4990[0x42], &lookup_table_6b4990[0x43], &lookup_table_6b4990[0x44], 
                &lookup_table_6b4990[0x45], &lookup_table_6b4990[0x46], &lookup_table_6b4990[0x47], 
                &lookup_table_6b4990[0x48], &lookup_table_6b4990[0x49], &lookup_table_6b4990[0x4a], 
                &lookup_table_6b4990[0x4b], &lookup_table_6b4990[0x4c], &lookup_table_6b4990[0x4d], 
                &lookup_table_6b4990[0x4e], &lookup_table_6b4990[0x4f], &lookup_table_6b4990[0x50], 
                &lookup_table_6b4990[0x51], &lookup_table_6b4990[0x52], &lookup_table_6b4990[0x53], 
                &lookup_table_6b4990[0x55], &lookup_table_6b4990[0x56], &lookup_table_6b4990[0x57], 
                &lookup_table_6b4990[0x58], &lookup_table_6b4990[0x59], &lookup_table_6b4990[0x5a], 
                &lookup_table_6b4990[0x5b], &lookup_table_6b4990[0x5c], &lookup_table_6b4990[0x5d], 
                &lookup_table_6b4990[0x5e], &lookup_table_6b4990[0x5f], &lookup_table_6b4990[0x60], 
                &lookup_table_6b4990[0x61], &lookup_table_6b4990[0x62], &lookup_table_6b4990[0x63], 
                &lookup_table_6b4990[0x64], &lookup_table_6b4990[0x65], &lookup_table_6b4990[0x66], 
                &lookup_table_6b4990[0x67], &lookup_table_6b4990[0x68], &lookup_table_6b4990[0x69], 
                &lookup_table_6b4990[0x6a], &lookup_table_6b4990[0x6b], &lookup_table_6b4990[0x6c], 
                &lookup_table_6b4990[0x6d], &lookup_table_6b4990[0x6e], &lookup_table_6b4990[0x6f], 
                &lookup_table_6b4990[0x70], &lookup_table_6b4990[0x71]
            goto label_6b4916
        case &lookup_table_6b4990[0x20], &lookup_table_6b4990[0x54]
            result.b = 0
            return result
