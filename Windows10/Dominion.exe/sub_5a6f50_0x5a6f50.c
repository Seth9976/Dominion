// 函数: sub_5a6f50
// 地址: 0x5a6f50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2 u> 6)
    sub_63b870(arg1, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp", 0x7c1, 
        "GetHeightmapPattern")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t var_1e0
int32_t var_1dc
int32_t var_1d8
int32_t var_1d4
int32_t var_1c

switch (arg2)
    case 0
        memset(&var_1e0, 0, 0x1c8)
        int32_t edi_1 = *arg3
        int32_t esi_1 = arg3[1]
        int32_t var_18_1 = 0x40000000
        int32_t var_1f4_1 = 0x5851f42d
        int32_t var_14_1 = 0x3f000000
        int32_t ebx_2 = var_1c * 7
        int32_t var_1f8_1 = 0x4c957f2d
        (&var_1dc)[ebx_2] = 0
        int32_t eax_2
        int32_t edx
        eax_2, edx = __allmul(edi_1, esi_1, var_1f8_1, var_1f4_1)
        int32_t var_c_1 = 0
        __builtin_memset(&(&var_1d4)[ebx_2], 0, 8)
        bool c_1 = eax_2 + arg3[2] u< eax_2
        *arg3 = eax_2 + arg3[2]
        arg3[1] = adc.d(edx, arg3[3], c_1)
        int32_t edi_3 = (edi_1 u>> 0x1b | esi_1 << 5) ^ esi_1 u>> 0xd
        uint32_t esi_2 = esi_1 u>> 0x1b
        void var_1cc
        *(&var_1cc + (ebx_2 << 2)) = 0x40000000
        (&var_1d8)[ebx_2] = ((((edi_3 << ((neg.d(esi_2)).b & 0x1f) | edi_3 u>> esi_2.b) & 0x7fffff)
            | 0x3f800000) - 1f) * 6.28318548f
        int32_t ecx_8 = (var_1c + 1) * 7
        __builtin_memcpy(&(&var_1dc)[ecx_8], "\x03\x00\x00\x00\x28\x00\x00\x00", 8)
        __builtin_memcpy(&(&var_1d4)[ecx_8], 
            "\xcd\xcc\xcc\x3c\xcd\xcc\xcc\x3d\x00\x00\x80\x3e\xcd\xcc\xcc\x3d", 0x10)
        (&var_1dc)[(var_1c + 2) * 7] = 6
        (&var_1dc)[(var_1c + 3) * 7] = 4
        (&var_1dc)[(var_1c + 4) * 7] = 5
        int32_t var_1c_6 = var_1c + 6
        __builtin_memcpy(&(&var_1dc)[(var_1c + 5) * 7], "\x07\x00\x00\x00\x00\x00\x80\xbf", 8)
        __builtin_memcpy(arg4, &var_1e0, 0x1d0)
        return arg4
    case 1
        __builtin_memcpy(arg4, sub_5a6d30(&var_1e0, arg2, arg3, &var_1e0), 0x1d0)
        return arg4
    case 2
        __builtin_memcpy(arg4, sub_5a65b0(&var_1e0, arg2, arg3, &var_1e0), 0x1d0)
        return arg4
    case 3
        __builtin_memcpy(arg4, sub_5a68d0(&var_1e0, arg2, arg3, &var_1e0), 0x1d0)
        return arg4
    case 4
        __builtin_memcpy(arg4, sub_5a6b00(&var_1e0, arg2, arg3, &var_1e0), 0x1d0)
        return arg4
    case 5
        memset(&var_1e0, 0, 0x1d0)
        var_1d4 = 0
        var_1dc = 1
        int32_t var_1d0 = 0
        var_1d8 = 0xbf800000
        int32_t var_1c0
        __builtin_memcpy(&var_1c0, 
            "\x03\x00\x00\x00\x32\x00\x00\x00\xcd\xcc\xcc\x3c\xcd\xcc\xcc\x3d\x00\x00\x80\x3e\xcd\xcc\x"
        "cc\x3d", 
            0x18)
        int32_t var_1a8_1 = 0
        int32_t var_1c_7 = 3
        (&var_1dc)[0xe] = 6
        (&var_1dc)[var_1c_7 * 7] = 4
        (&var_1dc)[(var_1c_7 + 1) * 7] = 5
        __builtin_memcpy(&(&var_1dc)[(var_1c_7 + 2) * 7], "\x07\x00\x00\x00\x00\x00\x00\x3f", 8)
        (&var_1dc)[(var_1c_7 + 3) * 7] = 8
        __builtin_memcpy(&(&var_1dc)[(var_1c_7 + 4) * 7], "\x07\x00\x00\x00\x00\x00\x00\x3f", 8)
        int32_t var_1c_13 = var_1c_7 + 6
        (&var_1dc)[(var_1c_7 + 5) * 7] = 9
        __builtin_memcpy(arg4, &var_1e0, 0x1d0)
        return arg4
    case 6
        memset(&var_1dc, 0, 0x1cc)
        __builtin_memcpy(&var_1e0, 
            "\x06\x00\x00\x00\x03\x00\x00\x00\x19\x00\x00\x00\xcd\xcc\xcc\x3c\xcd\xcc\xcc\x3d\x00\x00\x"
        "80\x3e\xcd\xcc\xcc\x3d", 
            0x1c)
        (&var_1dc)[(var_1c + 1) * 7] = 6
        (&var_1dc)[(var_1c + 2) * 7] = 4
        (&var_1dc)[(var_1c + 3) * 7] = 5
        __builtin_memcpy(&(&var_1dc)[(var_1c + 4) * 7], "\x07\x00\x00\x00\x00\x00\x00\x3f", 8)
        (&var_1dc)[(var_1c + 5) * 7] = 8
        int32_t var_1c_20 = var_1c + 7
        (&var_1dc)[(var_1c + 6) * 7] = 9
        __builtin_memcpy(arg4, &var_1e0, 0x1d0)
        return arg4
