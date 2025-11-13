// 函数: sub_5f1e60
// 地址: 0x5f1e60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax_1 = sub_5ce300(arg6, arg5, arg2, arg7, *arg6, arg6[1])
int32_t edx_1 = *(arg5 + 0x5c)
uint32_t var_2c = eax_1
int32_t var_174_4
char const* const var_170_4
char* ecx_9
int32_t ecx_3

if (edx_1 s<= 0x3e9)
    if (edx_1 == 0x3e9)
    label_5f2054:
        ecx_3 = 0xf
        goto label_5f2060
    
    if (edx_1 != 2)
        goto label_5f21ad
    
    eax_1 = *(arg5 + 0x384)
    ecx_3 = 0xa
label_5f1ecf:
    int128_t var_ac
    int32_t* eax_3 = sub_5cc540(&var_ac, edx_1, ecx_3, &var_ac, 0, 0, arg3, eax_1, arg2)
    int32_t ecx_4 = *(arg2 + 0x1a18)
    int32_t ecx_5 = ecx_4 - 1
    int128_t xmm1_1 = *eax_3
    int128_t xmm2_1 = *(eax_3 + 0x10)
    int128_t xmm3_1 = *(eax_3 + 0x20)
    int128_t xmm4_1 = *(eax_3 + 0x30)
    int128_t xmm5_1 = *(eax_3 + 0x40)
    int128_t xmm6_1 = *(eax_3 + 0x50)
    
    if (ecx_4 - 1 s>= 0)
        void* eax_6 = ecx_5 * 0xb0 + 0x4a0 + arg2
        int32_t temp2_1
        
        do
            int32_t edx_2 = *eax_6
            
            if (edx_2 == 3 || edx_2 == 0xa)
                *(arg2 + 0x1a18) -= 1
            
            eax_6 -= 0xb0
            temp2_1 = ecx_5
            ecx_5 -= 1
        while (temp2_1 - 1 s>= 0)
    
    int32_t var_1c_1 = *(arg5 + 0x5c)
    int64_t var_18_1 = 0
    int128_t var_4c
    int128_t* var_170_2 = &var_4c
    int32_t var_20_1 = 1
    int32_t var_d4 = 1
    int128_t var_cc_1 = xmm1_1
    int32_t var_174_2 = 0
    int128_t var_bc_1 = xmm2_1
    int32_t var_178_2 = 6
    var_ac = xmm3_1
    int32_t var_10_1 = 0x10000
    int128_t var_9c = xmm4_1
    int32_t var_15c[0x22]
    int32_t* var_17c_2 = &var_15c
    __builtin_memcpy(&var_15c, &var_d4, 0x88)
    var_4c = arg2.o
    int64_t var_3c_1 = var_18_1
    sub_6371b0(arg2 + 0x258, var_17c_2, var_178_2, var_174_2, var_170_2)
    var_1c_1.q = 0
    int32_t var_20_2 = 4
    int32_t* var_170_3 = &var_4c
    var_18_1:4.d = 0
    var_4c = arg2.o
    int32_t var_10_2 = 0
    int64_t var_3c_2 = var_18_1
    sub_637100(arg2 + 0x258, 0x3e8, var_170_3)
    eax_1 = arg5
    int32_t esi_2 = *(eax_1 + 0x5c)
    int32_t ecx_8 = *(eax_1 + 0x64)
    int32_t edi_1 = *(eax_1 + 0x60)
    
    if (esi_2 != 0)
        memset(&var_9c:0xc, 0, 0x40)
        var_ac:8.d = arg3
        var_ac:0xc.d = var_2c
        var_9c:4.d = ecx_8
        int32_t eax_12 = 0
        var_ac:4.d = esi_2
        void* var_50 = arg2
        
        if (esi_2 == 2)
            eax_12 = 4
        
        int32_t var_10_3 = eax_12
        var_ac.d = 6
        int128_t xmm6_2 = var_ac
        var_9c.d = edi_1
        var_9c:8.d = 0
        int128_t xmm5_2 = var_9c
        int32_t* var_170_6 = &var_4c
        *arg4 = xmm6_2
        int32_t var_1c_2 = esi_2
        int64_t var_18_2 = 0
        arg4[1] = xmm5_2
        int32_t var_20_3 = 1
        int32_t var_174_6 = 0
        arg4[2] = xmm5_1
        var_d4 = 1
        int128_t var_cc_2 = xmm6_2
        int32_t var_178_4 = 6
        int128_t var_bc_2 = xmm5_2
        int32_t* var_17c_3 = &var_15c
        var_ac = xmm5_1
        var_9c = xmm6_1
        int128_t var_6c
        int128_t var_8c_2 = var_6c
        int128_t var_5c
        int128_t var_7c_2 = var_5c
        arg4[3] = xmm6_1
        var_4c = arg2.o
        __builtin_memcpy(&var_15c, &var_d4, 0x88)
        arg4[4] = var_6c
        arg4[5] = var_5c
        int64_t var_3c_3 = var_18_2
        sub_6371b0(arg2 + 0x258, var_17c_3, var_178_4, var_174_6, var_170_6)
        return arg4
    
    var_170_4 = "DomLocSet"
    var_174_4 = 0xa6d
    ecx_9 = "where != CW_NONE"
else if (edx_1 - 0x3ea u> 0x88)
label_5f21ad:
    var_170_4 = "DomLocDisplayLoc"
    var_174_4 = 0x76fa
    ecx_9 = "Halt"
else
    eax_1 = zx.d(*(edx_1 + sub_5f1d60+0xae))
    
    switch (eax_1)
        case 0
            ecx_3 = 0xb
            goto label_5f2060
        case 1
            ecx_3 = 0xc
        label_5f2060:
            eax_1 = *(arg5 + 0x384)
            
            if (arg3 != 0xffffffff)
                goto label_5f1ecf
            
            var_170_4 = "DomMoveDisplay"
            var_174_4 = 0x7707
            ecx_9 = "who != PLAYER_NONE"
        case 2
            ecx_3 = 0xd
            goto label_5f2060
        case 3
            goto label_5f2054
        case 4
            ecx_3 = 0xe
            goto label_5f2060
        case 5
            goto label_5f21ad
sub_63b870(eax_1, &data_801800, ecx_9, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_174_4, 
    var_170_4)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
