// 函数: sub_4b8a50
// 地址: 0x4b8a50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* edi = data_cc8d5c
char const* const var_20
int32_t var_1c
char const* const var_18_1
int32_t eax
char* ecx_1

if (edi != 0)
    sub_4ac320(edi + 0x7570)
    sub_4ac120(edi + 0x75b8)
    sub_4ac220(edi + 0x75c4)
    
    if (*(edi + 0x507c) != 0)
        sub_4bae80(edi + 0x507c)
        int32_t eax_1 = *(edi + 0x507c)
        
        if (eax_1 != 0)
            _aligned_free(eax_1)
        
        __builtin_memset(edi + 0x507c, 0, 0x14)
        *(edi + 0x5094) = 0
    
    if (*(edi + 0x7754) != 0)
        sub_4bb0c0(edi + 0x7754)
        int32_t eax_2 = *(edi + 0x7754)
        
        if (eax_2 != 0)
            _aligned_free(eax_2)
        
        __builtin_memset(edi + 0x7754, 0, 0x14)
        *(edi + 0x776c) = 0
    
    sub_4aeb40(0)
    int32_t eax_3 = data_bf23b8
    
    if (eax_3 == 0)
        goto label_4b8b54
    
    eax = eax_3 - 1
    
    if (eax_3 == 1)
        SteamAPI_Shutdown()
    label_4b8b54:
        void* eax_5 = data_bf23d4
        data_bf23b8 = 0
        
        if (eax_5 != 0 && eax_5 != &data_801800)
            if (data_cf65bc != 0 && *eax_5 != 0)
                char* eax_6 = sub_63d4e0(&data_bf23d4)
                int32_t temp2_1 = *(eax_6 + 4)
                *(eax_6 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
            
            data_bf23d4 = &data_801800
        
        DeleteCriticalSection(&data_bf23e8)
        sub_4d0550()
        int32_t i = 0
        
        if (*(edi + 0x5028) s> 0)
            void* esi_3 = edi + 0x30
            
            do
                char* eax_7 = *esi_3
                
                if (eax_7 != 0 && eax_7 != &data_801800)
                    if (data_cf65bc != 0 && *eax_7 != 0)
                        char* eax_8 = sub_63d4e0(esi_3)
                        int32_t temp4_1 = *(eax_8 + 4)
                        *(eax_8 + 4) -= 1
                        
                        if (temp4_1 == 1)
                            sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                    
                    *esi_3 = &data_801800
                
                i += 1
                esi_3 += 0x20
            while (i s< *(edi + 0x5028))
        
        char* eax_9 = *(edi + 0x20)
        
        if (eax_9 != 0 && eax_9 != &data_801800)
            if (data_cf65bc != 0 && *eax_9 != 0)
                char* eax_10 = sub_63d4e0(edi + 0x20)
                int32_t temp3_1 = *(eax_10 + 4)
                *(eax_10 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
            
            *(edi + 0x20) = &data_801800
        
        if (*(edi + 0x5068) != 0)
            sub_4d6110(edi + 0x5098)
        
        sub_61b2f0()
        return sub_4acd60()
    
    var_18_1 = "GameCenterDisconnect"
    var_1c = 0x357
    var_20 = "C:\x\ax2017\Engine\GameCenter.cpp"
    ecx_1 = "Halt"
else
    var_18_1 = "GetClient"
    var_1c = 0x7b
    var_20 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_1 = "gClient"

sub_63b870(eax, &data_801800, ecx_1, var_20, var_1c, var_18_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
