// 函数: sub_633660
// 地址: 0x633660
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
void* const __return_addr_1 = __return_addr
__chkstk(0x1908)
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
uint32_t edi = 0
int32_t* result = sub_4b9480()
char const* const ecx_10

if (result[0x46a] s<= 0)
label_63389e:
    void var_1888
    int32_t edx_4
    result, edx_4 = sub_6320d0(&var_1888)
    int32_t edi_1 = 0
    int32_t var_888
    
    if (var_888 s<= 0)
    label_633983:
        CookieCheckFunction(result)
        return result
    
    int32_t* esi_3 = &var_1888
    
    while (true)
        int32_t eax_10 = *esi_3
        int128_t var_1910
        int32_t var_884[0x201]
        int128_t* eax_11
        eax_11, edx_4 = sub_5cf960(eax_10, edx_4, var_884[eax_10], &var_1910)
        int96_t result_1 = (*eax_11).12
        result = result_1
        
        if (result u> 3)
            char const* const var_1c_9 = "UpdatePods"
            int32_t var_20_6 = 0x11090
            ecx_10 = "Halt"
            break
        
        switch (result)
            case 1
                int32_t eax_12 = data_b604e0
                
                if (eax_12 == 0xffffffff)
                    eax_12 = 0
                
                result, edx_4 = sub_632520(eax_12, esi_3, &var_1888, result_1:4.d)
            case 3
                result, edx_4 = sub_6333f0(result, esi_3, &var_1888, result_1:4.d, result_1:8.d)
        
        edi_1 += 1
        esi_3 = &esi_3[2]
        
        if (edi_1 s>= var_888)
            goto label_633983
    
label_63399e:
    char const* const var_24_3 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
else
    while (true)
        void* esi
        
        if (edi != 0xffffffff)
            if (edi s< 0)
                char const* const var_1c_6 = "PGUIGet"
                int32_t var_20_4 = 0xa86
                ecx_10 = "who >= 0"
                goto label_63399e
            
            if (edi s>= 6)
                char const* const var_1c_5 = "PGUIGet"
                int32_t var_20_3 = 0xa87
                ecx_10 = "(int)who < (int)MAX_PLAYERS_DOM"
                goto label_63399e
            
            esi = edi * 0x4d30 + &data_b6521c
        else
            esi = &data_b6521c
        
        result = data_cc8d5c
        
        if (result == 0)
            char const* const var_1c_4 = "GetClient"
            int32_t var_20_2 = 0x7b
            char const* const var_24_2 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
            ecx_10 = "gClient"
            break
        
        int32_t edx_1 = result[0x1d64]
        int32_t ecx_1 = data_b604e0
        int32_t eax_2
        
        if (edi == edx_1)
            int32_t var_188c_1 = 0
            eax_2 = ecx_1
            
            if (ecx_1 == 0xffffffff)
                eax_2 = 0
        
        int32_t eax_3
        
        if (edi != edx_1 || edi == eax_2)
            eax_3 = data_b80b48
            
            if (eax_3 == edx_1 && eax_3 != data_b80b44 && ecx_1 == 0xffffffff)
                ecx_1 = 0
        
        if ((edi != edx_1 || edi == eax_2)
                && (eax_3 != edx_1 || eax_3 == data_b80b44 || edi == ecx_1 || data_b824dc != 0))
            int32_t ecx_5 = *esi
            
            if (ecx_5 != 0)
                uint32_t eax_7 = zx.d(ecx_5.w)
                
                if (eax_7 u< data_b809e4)
                    void* eax_9 = eax_7 * 0x1c30 + data_b809e0
                    
                    if (*(eax_9 + 0x1c28) == ecx_5 && eax_9 != 0)
                        sub_5cd3e0(eax_9)
                        sub_5cb5a0(eax_9)
                
                *esi = 0
        else if (*esi == 0)
            int128_t var_18a0
            var_18a0.d = 0
            var_18a0:4.d = edi
            void* eax_4 = sub_637730(&data_b809e0)
            int32_t var_1c_1 = 0x40
            int32_t var_20_1 = 0
            void var_18e4
            void* var_24_1 = &var_18e4
            *(eax_4 + 0x2c) = 7
            *(eax_4 + 0x224) = var_18a0
            *(eax_4 + 0x220) = 3
            memset()
            int64_t var_18f0_1 = 0
            int32_t var_18fc_1 = 0x3f1
            uint32_t var_18f8_1 = edi
            int32_t var_18f4_1 = 0
            int128_t var_80 = 0x13.o
            int32_t var_18e8_1 = 0
            int128_t var_70_1 = var_18f0_1.o
            int128_t var_18e0
            int128_t var_60_1 = var_18e0
            int128_t var_18d0
            int128_t var_50_1 = var_18d0
            int128_t var_18c0
            int128_t var_40_1 = var_18c0
            void* var_18a4_1 = eax_4
            int128_t var_18b0
            int128_t var_30_1 = var_18b0
            sub_5cd0a0(sub_5cb630(eax_4 + 0x258, &var_80), edi, eax_4, 0)
            *esi = *(eax_4 + 0x1c28)
        
        edi += 1
        result = sub_4b9480()
        
        if (edi s>= result[0x46a])
            goto label_63389e

sub_63b870(result, &data_801800, ecx_10)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
