// 函数: sub_4b9da0
// 地址: 0x4b9da0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* ebx = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
void var_790
int32_t eax_3 = sub_4b9b40(&var_790)
int32_t edi = *(ebx + 0x71e8)
int32_t var_a5c = 0
int32_t eax_4 = sub_4e4260(eax_3, eax_3, &var_790, &var_a5c)

if (edi != 0)
    eax_4 &= edi
else
    *(ebx + 0x71ec) = 2

*(ebx + 0x71e8) = eax_4
char* var_a50
memset(&var_a50, 0, 0x40)
int32_t eax_5 = *(ebx + 0x71ec)
int128_t (* eax_9)[0x28]

if (eax_5 == 0)
    int128_t var_a10[0x28]
    memset(&var_a10, 0, 0x280)
    int32_t esi_1 = *(ebx + 0x71e8)
    int32_t var_a58_1 = esi_1
    int128_t (* ebx_1)[0x28] = &var_a10
    char var_a5d_1 = 0
    int32_t edi_1 = 0
    int32_t edx_1 = 1
    int128_t (* eax_12)[0x28]
    
    for (int128_t* const i = &data_77fea0; i != &data_77fee8; )
        if ((esi_1 & edx_1) == 0)
            eax_12.b = var_a5d_1
        else
            esi_1 = var_a58_1
            
            if (*i != 0x13)
                eax_12 = ebx_1
                edi_1 += 1
                ebx_1 = &(*ebx_1)[1]
                *(eax_12 + 4) = 0xffffffff
                *(eax_12 + 8) = 0
                *(eax_12 + 0xc) = 0xa
                eax_12.b = var_a5d_1
            else
                eax_12.b = 1
                var_a5d_1 = 1
        
        i += 4
        edx_1 *= 2
    
    if (eax_12.b != 0 && var_a5c != 0)
        int32_t eax_14 = edi_1 * 2
        edi_1 += 1
        *(&var_a10 + (eax_14 << 3)) = 0x13
        var_a08
        *(&var_a08 + (eax_14 << 3)) = 0
        var_a04
        *(&var_a04 + (eax_14 << 3)) = 0xa
    
    int32_t var_a38_3 = edi_1
    eax_9 = &var_a10
    int32_t var_a48_2 = 1
    goto label_4b9fa6

if (eax_5 == 1)
    int128_t var_290[0x28]
    memset(&var_290, 0, 0x280)
    int32_t eax_10 = sub_4b9b40(&var_290)
    int32_t var_a38_2 = eax_10
    int128_t (* var_a40_1)[0x28] = &var_290
    int32_t ecx_7 = *(ebx + 0x71f0)
    
    if (ecx_7 == 0xffffffff)
        int32_t var_a4c_2 = eax_10
        int32_t var_a48_1 = 2
    else
        int32_t eax_11 = 0x11
        
        if (ecx_7 != 0)
            eax_11 = ecx_7
        
        int32_t var_a4c_1 = eax_11
    
    goto label_4b9faa

uint32_t result = eax_5 - 2
char const* const var_a7c_1
int32_t var_a78_1
char const* const var_a74_1
char* ecx_4

if (eax_5 == 2)
    int128_t var_510[0x28]
    memset(&var_510, 0, 0x280)
    int32_t var_a38_1 = sub_4b9b40(&var_510)
    eax_9 = &var_510
label_4b9fa6:
    int128_t (* var_a40_2)[0x28] = eax_9
label_4b9faa:
    void* esi_3 = ebx + 0x58ec
    int32_t ecx_9 = 0
    void* var_a30_1 = esi_3
    int32_t eax_15 = *(ebx + 0x63dc)
    int32_t var_a28_1 = eax_15
    int32_t i_3 = eax_15 << 2
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            char eax_16 = *esi_3
            esi_3 += 1
            ecx_9 = ecx_9 u>> 8 ^ *(((zx.d(eax_16) ^ zx.d(ecx_9.b)) << 2) + &data_7ffd70)
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    void* esi_4 = ebx + 0x56e8
    int32_t var_a24_1 = ecx_9
    void* var_a20_1 = esi_4
    int32_t ecx_11 = 0
    int32_t eax_19 = *(ebx + 0x58e8)
    int32_t i_4 = eax_19 << 3
    
    if (i_4 != 0)
        int32_t i_2
        
        do
            char eax_20 = *esi_4
            esi_4 += 1
            ecx_11 = ecx_11 u>> 8 ^ *(((zx.d(eax_20) ^ zx.d(ecx_11.b)) << 2) + &data_7ffd70)
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
    
    int32_t var_a14_1 = ecx_11
    int32_t eax_23 = *(ebx + 0x71e0)
    int32_t esi_5
    
    if (eax_23 == 0)
        esi_5 = 0x12
    label_4ba06f:
        result = sub_4b9d20()
        
        if (result.b != 0)
            esi_5 = (esi_5 & 0xfffffffe) | 2
        
        var_a50 = esi_5 | 4
        
        if (eax_19 s>= 0)
            void* ecx_13 = data_cc8d5c
            
            if (ecx_13 != 0)
                sub_68b720(&var_a50, 0xf42bc, *(ecx_13 + 0x14), data_1597d40, &var_a50)
                result = data_cc8d5c
                
                if (result != 0)
                    *(result + 0x7694) = 1
                    *(result + 0x7698) = 0
                    data_8db700 = 0x26
                    CookieCheckFunction(result)
                    return result
            
            var_a74_1 = "GetClient"
            var_a78_1 = 0x7b
            ecx_4 = "gClient"
            var_a7c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
        else
            var_a74_1 = "ClientMatchmakingQueue"
            var_a78_1 = 0x1583
            var_a7c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
            ecx_4 = "msg.numSmartplays >= 0"
    else
        if (eax_23 == 1)
            esi_5 = 0x11
            goto label_4ba06f
        
        result = eax_23 - 2
        
        if (eax_23 == 2)
            esi_5 = 0x13
            goto label_4ba06f
        
        var_a74_1 = "CalcMatchmakingPoolFlags"
        var_a78_1 = 0x151e
        var_a7c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
        ecx_4 = "Halt"
else
    var_a74_1 = "ClientMatchmakingQueue"
    var_a78_1 = 0x1579
    var_a7c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
    ecx_4 = "Halt"

sub_63b870(result, &data_801800, ecx_4, var_a7c_1, var_a78_1, var_a74_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
