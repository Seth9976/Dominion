// 函数: sub_6a3000
// 地址: 0x6a3000
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f6c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** i_2 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char const* const var_38
int32_t var_34
char const* const var_30
char* ecx

if (arg1[3] == 0)
    void* ebx_1 = data_147ac64
    int32_t* i_1 = *(ebx_1 + 0x14)
    i_2 = *(ebx_1 + 0x18) * 0x14
    struct _EXCEPTION_REGISTRATION_RECORD** i_3 = i_2
    
    if (i_1 != 0)
        int32_t* i
        
        do
            i = *i_1
            void* edx_1 = &i_1[1]
            i_2 = i_1
            i_1 = i
            
            if (arg1 u>= edx_1)
                i_2 += &i_3[1]
                void* ebx_4 = data_147ac64
                
                if (arg1 u< i_2)
                    int32_t eax_7
                    int32_t edx_2
                    edx_2:eax_7 = sx.q(arg1 - edx_1)
                    i_2 = divs.dp.d(edx_2:eax_7, 0x14)
                    
                    if (mods.dp.d(edx_2:eax_7, 0x14) == 0)
                        *(ebx_4 + 0x1c) -= 1
                        int32_t var_8_1 = 0
                        sub_4d4b30(&arg1[1])
                        int32_t var_8_2 = 1
                        
                        if (data_cf65bc != 0)
                            char* eax_8 = *arg1
                            
                            if (eax_8 != 0 && *eax_8 != 0)
                                char* eax_9 = sub_63d4e0(arg1)
                                int32_t temp2_1 = *(eax_9 + 4)
                                *(eax_9 + 4) -= 1
                                
                                if (temp2_1 == 1)
                                    sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
                                    *arg1 = &data_801800
                        
                        char* result = *(ebx_4 + 0x10)
                        *arg1 = result
                        *(ebx_4 + 0x10) = arg1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return result
        while (i != 0)
    
    var_30 = "XTypedAllocator<struct DefParseTree>::Free"
    var_34 = 0x112
    var_38 = "C:\x\ax2017\Engine\xAlloc.h"
    ecx = "IsPointerFromAllocator(pItem)"
else
    var_30 = "DefParseTreeFree"
    var_34 = 0x3c
    var_38 = "C:\x\ax2017\Engine\DefParseTree.cpp"
    ecx = "pParseTree->itemList.GetSize() == 0"

sub_63b870(i_2, &data_801800, ecx, var_38, var_34, var_30)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
