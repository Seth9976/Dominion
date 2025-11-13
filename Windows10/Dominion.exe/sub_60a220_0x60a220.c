// 函数: sub_60a220
// 地址: 0x60a220
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax
eax.b = 0
int32_t* esi = arg2
int32_t* var_10 = esi
char var_5 = 0
char const* const var_2c
int32_t var_28_1
char const* const var_24_1
char* ecx_2
int32_t result_3
int32_t result

if (arg1 == 0)
    void* edi_2 = data_cc8d5c
    
    if (edi_2 != 0)
        result = *(edi_2 + 0x7690)
        result_3 = result
        
        if (result s<= 0xa)
            if (result s<= 0)
                goto label_60a39d
            
            goto label_60a320
        
        result = 0xa
        result_3 = 0xa
    label_60a320:
        void* esi_2 = &esi[2]
        int32_t result_2 = result
        void* edi_3 = edi_2 + 0x75e4
        int32_t i
        
        do
            *(esi_2 - 8) = *(edi_3 - 8)
            sub_63d850(esi_2 - 4, edi_3 - 4)
            *esi_2 = *edi_3
            void* eax_11 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
            
            if (*(esi_2 - 8) == *(eax_11 + 0x4250))
                var_5 = 1
                *esi_2 = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x72d8)
            
            edi_3 += 0xc
            esi_2 += 0xc
            i = result
            result -= 1
        while (i != 1)
    label_60a38e:
        result = result_3
        
        if (var_5 != 0)
            return result
        
        esi = var_10
    label_60a39d:
        int32_t result_4 = 9
        
        if (result != 0xa)
            result_4 = result
        
        result = result_4 + 1
        void* esi_3 = &esi[result_4 * 3]
        *esi_3 = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x4250)
        sub_63d850(esi_3 + 4, sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)))
        *(esi_3 + 8) = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x72d8)
        int32_t esi_5 = result * 0xc
        int32_t eax_20
        int32_t edx
        edx:eax_20 = muls.dp.d(0x2aaaaaab, esi_5)
        sub_637940(eax_20, &var_10[result * 3], var_10, esi_5 s/ 0xc, sub_60a160)
        return result
    
    var_24_1 = "GetClient"
    var_28_1 = 0x7b
    var_2c = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_2 = "gClient"
else
    if (arg1 == 1)
        void* eax_1 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        result = *(eax_1 + 0x72d0)
        result_3 = result
        
        if (result s> 0xa)
            result = 0xa
            result_3 = 0xa
        else if (result s<= 0)
            goto label_60a39d
        
        int32_t* esi_1 = &esi[2]
        int32_t result_1 = result
        void* edi_1 = eax_1 + 0x7224
        int32_t i_1
        
        do
            esi_1[-2] = *(edi_1 - 8)
            sub_63d850(&esi_1[-1], edi_1 - 4)
            *esi_1 = *edi_1
            void* eax_5 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
            
            if (esi_1[-2] == *(eax_5 + 0x4250))
                var_5 = 1
                *esi_1 = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x72d8)
            
            edi_1 += 0xc
            esi_1 = &esi_1[3]
            i_1 = result
            result -= 1
        while (i_1 != 1)
        goto label_60a38e
    
    var_24_1 = "GetLeaderboardEntries"
    var_28_1 = 0xa92f
    var_2c = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_2 = "Halt"
sub_63b870(eax, &data_801800, ecx_2, var_2c, var_28_1, var_24_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
