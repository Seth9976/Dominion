// 函数: sub_57ec40
// 地址: 0x57ec40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t* var_14 = arg4

if (arg5 == 0)
    return 0

if (arg5 == 1)
    uint32_t eax_2 = *arg4
    bool cond:0_1
    
    if ((eax_2.b & 0x30) != 0)
        cond:0_1 = (*(sub_5769e0(eax_2, arg2, arg3, eax_2) + 0xac) & 1) != 0
    else
        void* eax_3 = sub_576940(eax_2, arg2, arg3, eax_2)
        
        if (*(eax_3 + 0x4c) != 2)
            *arg6 = *arg4
            return 1
        
        cond:0_1 = (*(eax_3 + 0x60) & arg5.b) != 0
    
    if (not(cond:0_1))
        *arg6 = *arg4
        return 1

int32_t edx = memcpy(arg6, arg4, arg5 << 2)
char ecx_2 = 1
int32_t esi_1 = 0
char var_5 = 1

if (arg5 s> 0)
    while (true)
        uint32_t eax_9 = var_14[esi_1]
        bool cond:2_1
        
        if ((eax_9.b & 0x30) != 0)
            void* eax_11
            eax_11, edx = sub_5769e0(eax_9, edx, arg3, eax_9)
            cond:2_1 = (*(eax_11 + 0xac) & 1) == 0
        label_57ed00:
            
            if (not(cond:2_1))
                esi_1 += 1
                
                if (esi_1 s< arg5)
                    continue
                
                ecx_2 = var_5
                break
        else
            void* eax_10
            eax_10, edx = sub_576940(eax_9, edx, arg3, eax_9)
            
            if (*(eax_10 + 0x4c) == 2)
                cond:2_1 = (*(eax_10 + 0x60) & 1) == 0
                goto label_57ed00
        ecx_2 = 0
        var_5 = 0
        break

int32_t edx_1 = arg2
int32_t var_50

if (edx_1 != arg3[0x673])
    var_50 = edx_1
else
    var_50 = arg3[0x674]

int32_t var_4c
__builtin_memset(&var_4c, 0, 0x30)
int128_t var_84 = var_4c.o
int32_t var_3c
int128_t var_74 = var_3c.o
int64_t var_2c
int128_t var_64 = var_2c.o

if (arg5 == 1 && ecx_2 != 0)
    uint32_t esi_2 = *var_14
    int32_t eax_15 = esi_2 & 0x30
    int32_t var_4c_1
    uint32_t var_3c_1
    
    if (eax_15 == 0)
        __builtin_memset(&var_4c_1, 0, 0x30)
    else
        void* eax_16 = sub_5769e0(eax_15, edx_1, arg3, esi_2)
        
        if (*(eax_16 + 4) != 0 || *(eax_16 + 0xc) != 5)
            ecx_2 = var_5
            edx_1 = arg2
            __builtin_memset(&var_4c_1, 0, 0x30)
        else
            if (eax_15 != 0x10)
                sub_63b870(eax_16, &data_801800, "type() == ABILITY_CARD_STATIC", 
                    "C:\x\ax2017\Jams\Dominion\code\DomGame.h", 0x11e, 
                    "AbilityID::static_ability_card_id")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            ecx_2 = var_5
            edx_1 = arg2
            var_4c_1 = 0x1d
            var_3c_1 = esi_2 u>> 0x12
    
    int128_t var_74_1 = var_3c_1.o
    var_84 = var_4c_1.o
    int64_t var_2c_1
    int128_t var_64_1 = var_2c_1.o

int32_t var_18 = 0
int32_t eax_18 = zx.d(ecx_2) ^ 1
int32_t var_14_2 = 0
return sub_623300(eax_18, &var_18, arg3, edx_1, var_50, 6, arg6, arg5, 1, eax_18, 0, &var_84, 4, 0, 
    0)
