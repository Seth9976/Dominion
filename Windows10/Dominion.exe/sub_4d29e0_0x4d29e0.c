// 函数: sub_4d29e0
// 地址: 0x4d29e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
*(sub_64e7a0(arg1) + 0x18bc) = sub_4d2840
void* eax_4 = sub_624450(*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 8))
uint32_t eax_5 = sub_64e7a0(arg1)
sub_665db0(eax_5, eax_4, eax_5, 0x3f800000, 0xffffffff, 0)
uint32_t eax_6 = sub_64e7a0(arg1)
sub_665db0(eax_6, &data_8dc6c8, eax_6, 0x3f800000, 0xffffffff, 0)
int32_t var_a8[0x28]
int32_t edx_1 = sub_60f080(&var_a8)
int32_t ecx_9 = 0
int32_t ecx_10

if (edx_1 s> 0)
    do
        if (var_a8[ecx_9] == 0x13)
            int32_t __saved_esi
            int32_t eax_8 = (&__saved_esi)[edx_1]
            edx_1 -= 1
            var_a8[ecx_9] = eax_8
            goto label_4d2a97
        
        ecx_9 += 1
    while (ecx_9 s< edx_1)
    
    ecx_10 = 0
    goto label_4d2aad

label_4d2a97:
ecx_10 = 0
bool cond:0_1 = edx_1 != 0

if (edx_1 s<= 0)
label_4d2ab4:
    
    if (not(cond:0_1))
        uint32_t eax_9 = sub_64e7a0(arg1)
        sub_665db0(eax_9, &data_8dba18, eax_9, 0x3f800000, 0xffffffff, 0)
else
label_4d2aad:
    
    do
        if (var_a8[ecx_10] == 2)
            cond:0_1 = edx_1 != 1
            goto label_4d2ab4
        
        ecx_10 += 1
    while (ecx_10 s< edx_1)

int32_t eax_10 = sub_4bfcf0()

if (eax_10 u> 3)
    sub_63b870(eax_10, &data_801800, "Halt", 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 0x2ccb, "TitleMoreUpdate")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

uint32_t eax_11
void** edx_3

switch (eax_10)
    case 0
        eax_11 = sub_64e7a0(arg1)
        edx_3 = &data_8db970
        int32_t var_b4 = 0
        int32_t var_b8 = 0xffffffff
    label_4d2b07:
        void* eax_12 = sub_665db0(eax_11, edx_3, eax_11, 0x3f800000, 0xffffffff, 0)
        CookieCheckFunction(eax_12)
        return eax_12
    case 1
        eax_11 = sub_64e7a0(arg1)
        edx_3 = &data_8db964
        int32_t var_b4_1 = 0
        int32_t var_b8_1 = 0xffffffff
        goto label_4d2b07
    case 2
        uint32_t eax_13 = sub_64e7a0(arg1)
        sub_665db0(eax_13, &data_8db964, eax_13, 0x3f800000, 0xffffffff, 0)
        uint32_t eax_14 = sub_64e7a0(arg1)
        sub_665db0(eax_14, &data_8db940, eax_14, 0x3f800000, 0xffffffff, 0)
        uint32_t eax_15 = sub_64e7a0(arg1)
        void* eax_16 = sub_665db0(eax_15, &data_8db94c, eax_15, 0x3f800000, 0xffffffff, 0)
        CookieCheckFunction(eax_16)
        return eax_16
    case 3
        uint32_t eax_17 = sub_64e7a0(arg1)
        sub_665db0(eax_17, &data_8db964, eax_17, 0x3f800000, 0xffffffff, 0)
        uint32_t eax_18 = sub_64e7a0(arg1)
        sub_665db0(eax_18, &data_8db940, eax_18, 0x3f800000, 0xffffffff, 0)
        uint32_t eax_19 = sub_64e7a0(arg1)
        void* eax_20 = sub_665db0(eax_19, &data_8db958, eax_19, 0x3f800000, 0xffffffff, 0)
        CookieCheckFunction(eax_20)
        return eax_20
