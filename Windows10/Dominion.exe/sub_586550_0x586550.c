// 函数: sub_586550
// 地址: 0x586550
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t var_8 = arg3
int32_t result_1 = arg4
uint32_t eax = arg3
int32_t* var_8_1 = eax
int32_t var_1c_1
char const* const ecx

if (result_1 s> 0)
    int32_t edi_1 = 0
    int32_t result = sub_583fc0(eax, arg2, arg3, 0xa00)
    uint32_t var_24
    int32_t* esi_1
    
    if (result s>= result_1)
    label_5865b3:
        int32_t var_18_2 = 0
        int32_t var_1c_2 = 0xffffffff
        esi_1 = var_8_1
        void var_28
        result = sub_571fa0(result, arg2, esi_1, 0xa00, neg.d(result_1), 0x476, nullptr, var_28, 
            var_24, arg5)
    label_5865e0:
        
        if (edi_1 == 0)
            return result
        
        int32_t var_18_3 = 0
        int32_t var_1c_3 = 0xffffffff
        return sub_571fa0(result, arg2, esi_1, 0x601, neg.d(edi_1), 0x476, nullptr, var_28, var_24, 
            arg5)
    
    var_24 = 0x29
    edi_1 = result_1 - result
    eax = sub_576b30(result, arg2, var_8_1, 0x29, 0, 0, 0)
    
    if (eax s> 0)
        result_1 = result
        
        if (result != 0)
            goto label_5865b3
        
        esi_1 = var_8_1
        goto label_5865e0
    
    char const* const var_18_4 = "RemoveCoffers"
    var_1c_1 = 0x30ea
    ecx = "HasOngoing(g, who, ONGOING_VPTOKEN_AS_COFFERS, 0, DOMCONTEXT_NONE)"
else
    char const* const var_18_1 = "RemoveCoffers"
    var_1c_1 = 0x30e1
    ecx = "amount > 0"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_1c_1, 
    "RemoveCoffers")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
