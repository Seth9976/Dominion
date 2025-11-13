// 函数: sub_5d3c80
// 地址: 0x5d3c80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg3
int32_t ecx = *(arg3 + 0x5c)
char const* const var_24
int32_t var_20
char const* const var_1c
uint32_t eax_3
int32_t* eax_16
char* ecx_2

if (ecx s<= 0x3e9)
    if (ecx == 0x3e9)
        eax_16 = arg4
        *eax_16 = 5
    label_5d4218:
        eax_16[1] = *(arg3 + 0x58)
        *(eax_16 + 8) = 0
        return eax_16
    
    if (ecx == 2)
        *arg4 = 0xc
        arg4[1] = 0xffffffff
        *(arg4 + 8) = 0
        return arg4
    
    if (ecx == 3)
        *arg4 = 0xf
        arg4[1] = 0xffffffff
        *(arg4 + 8) = 0
        return arg4
    
    if (ecx s< 7 || ecx s>= 0x48)
        goto label_5d4207
    
    eax_3 = ecx - 7
    
    if (eax_3 u> 0x40)
        var_1c = "BoardPileWhat"
        var_20 = 0x1118
        var_24 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
        ecx_2 = "where >= CW_BOARD_STANDARD_START && where < END_BOARD_PILES"
    label_5d423b:
        sub_63b870(eax_3, &data_801800, ecx_2, var_24, var_20, var_1c)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t eax_4 = *((ecx << 4) + 0xb81ffc)
    
    if (eax_4 s> 0xd3d)
        if (eax_4 == 0x1128)
            *arg4 = 0x11
            arg4[1] = 0xffffffff
            *(arg4 + 8) = 0
            return arg4
        
        if (eax_4 != 0x1301)
            goto label_5d4207
        
        *arg4 = 0x13
        arg4[1] = 0xffffffff
        *(arg4 + 8) = 0
        return arg4
    
    if (eax_4 == 0xd3d)
        *arg4 = 0xe
        arg4[1] = 0xffffffff
        *(arg4 + 8) = 0
        return arg4
    
    if (eax_4 == 0x70d)
        *arg4 = 0x10
        arg4[1] = 0xffffffff
        *(arg4 + 8) = 0
        return arg4
    
    if (eax_4 == 0x718)
        *arg4 = 0x12
        arg4[1] = 0xffffffff
        *(arg4 + 8) = 0
        return arg4
    
    if (eax_4 != 0xd30)
        goto label_5d4207
    
    goto label_5d3d06

if (ecx - 0x3eb u> 0x81)
label_5d4207:
    eax_16 = arg4
    *eax_16 = 0x14
    goto label_5d4218

switch (ecx)
    case 0x3eb
        eax_16 = arg4
        *eax_16 = 1
        goto label_5d4218
    case 0x3ec
        eax_16 = arg4
        *eax_16 = 3
        goto label_5d4218
    case 0x3ed, 0x3f1, 0x3f2, 0x3f3, 0x3f4, 0x3f5, 0x3f6, 0x3f7, 0x3f8, 0x3f9, 0x3fa, 0x3fb, 0x3fc, 
            0x3fd, 0x3fe, 0x3ff, 0x400, 0x401, 0x402, 0x403, 0x404, 0x405, 0x406, 0x407, 0x408, 
            0x409, 0x40a, 0x40b, 0x40c, 0x40d, 0x40e, 0x40f, 0x410, 0x411, 0x412, 0x413, 0x414, 
            0x415, 0x416, 0x417, 0x418, 0x419, 0x41a, 0x41b, 0x41c, 0x41d, 0x41e, 0x41f, 0x420, 
            0x421, 0x422, 0x423, 0x424, 0x425, 0x426, 0x427, 0x428, 0x429, 0x42a, 0x42b, 0x42c, 
            0x42d, 0x42e, 0x42f, 0x430, 0x431, 0x432, 0x433, 0x434, 0x435, 0x436, 0x437, 0x438, 
            0x439, 0x43a, 0x43b, 0x43c, 0x43d, 0x43e, 0x43f, 0x440, 0x441, 0x442, 0x443, 0x444, 
            0x445, 0x446, 0x447, 0x448, 0x449, 0x44a, 0x44b, 0x44c, 0x452, 0x465
        goto label_5d4207
    case 0x3ee, 0x3ef, 0x3f0
        int32_t ecx_3
        ecx_3.b = 0x20
        eax_3 = __aullshr(*(arg3 + 0x60), *(arg3 + 0x64), ecx_3.b)
        uint32_t ecx_4 = eax_3
        
        if (ecx_4 == 0)
            ecx_4 = *(arg3 + 0x68)
            
            if (ecx_4 == 0)
                *arg4 = 0x19
                *(arg4 + 4) = 0
                arg4[3] = ecx_4
                return arg4
        
        void* edx_1 = data_cc8d5c
        
        if (edx_1 == 0)
            var_1c = "GetClient"
            var_20 = 0x7b
            var_24 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
            ecx_2 = "gClient"
            goto label_5d423b
        
        int32_t ebx
        ebx.b = *(arg3 + 0x58) != *(edx_1 + 0x7590)
        *arg4 = 0x15
        uint32_t esi_1 = zx.d(ecx_4.w)
        arg4[1] = *(arg3 + 0x58)
        
        if (esi_1 u>= 0x320)
            sub_591930()
        
        arg4[2] = *(esi_1 * 0x64 + &data_b82524)
        arg4[3].b = ebx.b
        return arg4
    case 0x44d
        eax_16 = arg4
        *eax_16 = 4
        goto label_5d4218
    case 0x44e
        eax_16 = arg4
        *eax_16 = 0x16
        goto label_5d4218
    case 0x44f
        eax_16 = arg4
        *eax_16 = 0x17
        goto label_5d4218
    case 0x450
        eax_16 = arg4
        *eax_16 = 0x18
        goto label_5d4218
    case 0x451
        eax_16 = arg4
        *eax_16 = 6
        goto label_5d4218
    case 0x453
        *arg4 = 0x15
        arg4[1] = *(arg3 + 0x58)
        arg4[2] = 0x50c
        arg4[3] = 0
        return arg4
    case 0x454
        eax_16 = arg4
        *eax_16 = 0xb
        goto label_5d4218
    case 0x455
        *arg4 = 0x15
        arg4[1] = *(arg3 + 0x58)
        arg4[2] = 0xb21
        arg4[3] = 0
        return arg4
    case 0x456
        *arg4 = 0x15
        arg4[1] = *(arg3 + 0x58)
        arg4[2] = 0x100e
        arg4[3] = 0
        return arg4
    case 0x457
        *arg4 = 0x15
        arg4[1] = *(arg3 + 0x58)
        arg4[2] = 0xc04
        arg4[3] = 0
        return arg4
    case 0x458
        *arg4 = 0x15
        arg4[1] = *(arg3 + 0x58)
        arg4[2] = 0xd01
        arg4[3] = 0
        return arg4
    case 0x459
        *arg4 = 0x15
        arg4[1] = *(arg3 + 0x58)
        arg4[2] = 0x704
        arg4[3] = 0
        return arg4
    case 0x45a
        *arg4 = 0x15
        arg4[1] = *(arg3 + 0x58)
        arg4[2] = 0xf1e
        arg4[3] = 0
        return arg4
    case 0x45b
        *arg4 = 0x15
        arg4[1] = *(arg3 + 0x58)
        arg4[2] = 0xf2e
        arg4[3] = 0
        return arg4
    case 0x45c
        *arg4 = 0x15
        arg4[1] = *(arg3 + 0x58)
        arg4[2] = 0xf44
        arg4[3] = 0
        return arg4
    case 0x45d
        *arg4 = 0x15
        arg4[1] = *(arg3 + 0x58)
        arg4[2] = 0x130b
        arg4[3] = 0
        return arg4
    case 0x45e
        *arg4 = 0x15
        arg4[1] = *(arg3 + 0x58)
        arg4[2] = 0x130c
        arg4[3] = 0
        return arg4
    case 0x45f
        eax_16 = arg4
        *eax_16 = 7
        goto label_5d4218
    case 0x460
        eax_16 = arg4
        *eax_16 = 8
        goto label_5d4218
    case 0x461
        eax_16 = arg4
        *eax_16 = 9
        goto label_5d4218
    case 0x462
        eax_16 = arg4
        *eax_16 = 0xa
        goto label_5d4218
    case 0x463, 0x464
    label_5d3d06:
        *arg4 = 0xd
        arg4[1] = 0xffffffff
        *(arg4 + 8) = 0
        return arg4
    case 0x466
        *arg4 = 0x15
        arg4[1] = *(arg3 + 0x58)
        arg4[2] = 0x1100
        arg4[3] = 0
        return arg4
    case 0x467
        *arg4 = 0x15
        arg4[1] = *(arg3 + 0x58)
        arg4[2] = 0x1124
        arg4[3] = 0
        return arg4
    case 0x468
        *arg4 = 0x15
        arg4[1] = *(arg3 + 0x58)
        arg4[2] = 0x113a
        arg4[3] = 0
        return arg4
    case 0x469
        *arg4 = 0x15
        arg4[1] = *(arg3 + 0x58)
        arg4[2] = 0x1140
        arg4[3] = 0
        return arg4
    case 0x46a
        *arg4 = 0x15
        arg4[1] = *(arg3 + 0x58)
        arg4[2] = 0x114d
        arg4[3] = 0
        return arg4
    case 0x46b
        *arg4 = 0x15
        arg4[1] = *(arg3 + 0x58)
        arg4[2] = 0x1150
        arg4[3] = 0
        return arg4
    case 0x46c
        *arg4 = 0x15
        arg4[1] = *(arg3 + 0x58)
        arg4[2] = 0x1149
        arg4[3] = 0
        return arg4
