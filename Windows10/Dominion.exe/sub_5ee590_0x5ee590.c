// 函数: sub_5ee590
// 地址: 0x5ee590
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c = arg1
int32_t var_20
char const* const var_1c
void* eax
char* ecx

if (arg2[1] != 0)
    int32_t eax_1 = arg2[4]
    
    if (eax_1 == 2)
        if (arg2[0x1b] != 1)
            data_b7fcf8 = 0
            data_b7fcfa = 0
        else
            uint32_t edi_2 = zx.d((arg2[0x1c]).w)
            
            if (edi_2 u>= 0x320)
                sub_591930()
            
            if (*(edi_2 * 0x64 + &data_b82524) == 0xe11)
                data_b7fcfa = 0
            else
                data_b7fcf8 = 0
                data_b7fcfa = 0
    else if (eax_1 == 1 || eax_1 == 8)
        data_b7fcf8 = 0
        data_b7fcfa = 0
    
    int32_t eax_3 = arg2[4]
    
    if (eax_3 != 0x68 && eax_3 != 0x1e && eax_3 != 0xb4 && eax_3 != 0x73 && eax_3 != 0x48
            && eax_3 != 0x63 && eax_3 != 0x114 && eax_3 != 0x78)
        goto label_5ee660
    
    int32_t edx = data_b604e0
    
    if (edx == 0xffffffff)
        edx = 0
    
    eax = sub_5cc410(0, edx, 0x3ec, 0, 0)
    
    if (eax != 0)
        sub_5cbbf0(eax)
    label_5ee660:
        void* eax_4 = arg2[4]
        
        if (eax_4 != 0x33 && eax_4 != 0x34)
            goto label_5ee6a0
        
        int32_t edx_1 = data_b604e0
        
        if (edx_1 == 0xffffffff)
            edx_1 = 0
        
        eax = sub_5cc410(0, edx_1, 0x3eb, 0, 0)
        
        if (eax != 0)
            eax_4 = sub_5cbbf0(eax)
        label_5ee6a0:
            
            if (arg2[4] == 0x101)
                sub_5cbbf0(sub_5cc410(eax_4, arg1, 0x44e, 0, 0))
            
            int32_t eax_6 = arg2[4]
            
            if (eax_6 != 0x2c && eax_6 != 0x2e && eax_6 != 0x10a && eax_6 != 0x6f)
                goto label_5ee6f6
            
            eax = sub_5cc410(eax_6, 0xffffffff, 2, 0, 0)
            
            if (eax != 0)
                sub_5cbbf0(eax)
            label_5ee6f6:
                int32_t eax_7 = arg2[4]
                
                if (eax_7 == 0xd2 || eax_7 == 0xd4)
                    void* eax_8 = sub_5cc410(eax_7, arg1, 0x462, 0, 0)
                    
                    if (eax_8 != 0)
                        sub_5cbbf0(eax_8)
                
                if (arg2[4] == 0x51)
                    sub_5cbbf0(sub_5eaab0(0x70d))
                
                if (arg2[4] == 0x55)
                    sub_5cbbf0(sub_5eaab0(0x718))
                
                if (arg2[1] == 7)
                    sub_628ab0()
                
                sub_5ee2a0(arg2)
                int32_t* eax_11 = sub_4b9480()
                sub_5e9900(eax_11, arg1, eax_11, arg2)
                void* result = sub_5cc5e0(arg1)
                *(result + 0x4080) = 0
                arg2[0x19] = 1
                return result
    
    var_1c = "DomPileGet"
    var_20 = 0x9b0
    ecx = "pPile"
else
    var_1c = "SubmitAction"
    var_20 = 0x6ba9
    ecx = "action.choice != CHOICE_NONE"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_20, var_1c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
