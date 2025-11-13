// 函数: sub_604210
// 地址: 0x604210
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$initialize_environment_by_cloning_nolock@_W@@YAHXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_30 = arg3
int32_t var_28 = 0
uint32_t arg_4
int32_t eax_5
int32_t edx
edx:eax_5 = sx.q(data_ccf6d4 + arg_4)
int32_t temp1 = mods.dp.d(edx:eax_5, 0x135)
int32_t edi = temp1 * 3

if (*((edi << 3) + &data_7fcdc8) != temp1)
    sub_63b870(divs.dp.d(edx:eax_5, 0x135), &data_801800, "def.type == style", 
        "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x98fe, "GetPromptCustom")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* esi = (&data_7fcdcc)[edi * 2]

if (esi == 0)
    sub_63d720(arg3, &data_801800)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3

if (*esi == 0)
    sub_63d720(arg3, &data_801800)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3

char* eax_9 = arg5

if (*((edi << 3) + &data_7fcdd4) == 4 && eax_9 == 0)
    eax_9 = arg4

char* var_24 = eax_9

if (temp1 == 0xbe)
    esi = "dom_prompt_way_reconsider"
    
    if (eax_9 == 0)
        esi = "dom_prompt_way_consider"

arg_4 = sub_4c89a0()
int32_t eax_11 = sub_4dad50()
char* const var_1c
void* var_18
void* eax_13

if (eax_11 == 1)
    char* var_44_1 = esi
    sub_63df30(&var_1c, "%s_drag")
    int32_t var_8_1 = 1
    char* ecx_7 = &data_801800
    char* const eax_12 = var_1c
    
    if (eax_12 != 0)
        ecx_7 = eax_12
    
    eax_13 = sub_68c730(ecx_7, arg_4, esi)
    var_18 = eax_13
    int32_t var_8_2 = 2
    
    if (data_cf65bc != 0)
        char* ecx_8 = var_1c
        
        if (ecx_8 != 0 && *ecx_8 != 0)
            char* eax_14 = sub_63d4e0(&var_1c)
            int32_t temp2_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
                var_1c = &data_801800
            
            eax_13 = var_18
    
    var_8_2.b = 0

if (eax_11 != 1 || eax_13 == 0)
    eax_13 = sub_68c730(esi, arg_4, esi)
    var_18 = eax_13
    
    if (eax_13 == 0)
        sub_63d720(arg3, esi)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3

uint32_t esi_1 = *eax_13
arg_4 = esi_1

if (esi_1 != 0 && *esi_1 != 0)
    char* eax_16 = sub_63d4e0(&arg_4)
    *(eax_16 + 4) += 1

int32_t var_8_3 = 3
char* var_20

if (*((edi << 3) + &data_7fcdd4) == 4)
    char* var_44_2 = var_24
    sub_63df30(&var_20, "N=%d")
    char* const eax_17 = &data_801800
    char* const var_14 = &data_801800
    var_8_3.b = 5
    char* const edx_7 = &data_801800
    char* ecx_16 = var_20
    
    if (ecx_16 != 0)
        edx_7 = ecx_16
    
    char* ecx_18 = *(var_18 + 8)
    
    if (ecx_18 != 0 && *ecx_18 != 0)
        if (sub_62e860(&var_14, edx_7, ecx_18, &var_14) != 0)
            sub_63d850(&arg_4, &var_14)
            esi_1 = arg_4
        
        eax_17 = var_14
    
    var_8_3.b = 6
    
    if (data_cf65bc != 0 && eax_17 != 0 && *eax_17 != 0)
        char* eax_20 = sub_63d4e0(&var_14)
        int32_t temp3_1 = *(eax_20 + 4)
        *(eax_20 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
    
    var_8_3.b = 7
    
    if (data_cf65bc != 0)
        char* ecx_22 = var_20
        
        if (ecx_22 != 0 && *ecx_22 != 0)
            char* eax_21 = sub_63d4e0(&var_20)
            int32_t temp8_1 = *(eax_21 + 4)
            *(eax_21 + 4) -= 1
            
            if (temp8_1 == 1)
                sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
    
    var_8_3.b = 3

char* const eax_22 = sub_59a910(var_18, 1)
bool cond:3 = *((edi << 3) + &data_7fcdd0) == 0
var_1c = eax_22

if (not(cond:3))
    sub_604040(eax_22, *((edi << 3) + &data_7fcdd4), &var_24, var_24, eax_22)
    var_8_3.b = 8
    char* edx_13 = &data_801800
    char* eax_23 = var_24
    char* const ecx_27 = &data_801800
    
    if (eax_23 != 0)
        ecx_27 = eax_23
    
    if (esi_1 != 0)
        edx_13 = esi_1
    
    var_8_3.b = 9
    sub_63d850(&arg_4, sub_63dfa0(eax_23, edx_13, &var_20, *((edi << 3) + &data_7fcdd0), ecx_27))
    var_8_3.b = 0xa
    
    if (data_cf65bc != 0)
        char* eax_25 = var_20
        
        if (eax_25 != 0 && *eax_25 != 0)
            char* eax_26 = sub_63d4e0(&var_20)
            int32_t temp7_1 = *(eax_26 + 4)
            *(eax_26 + 4) -= 1
            
            if (temp7_1 == 1)
                sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)
    
    var_8_3.b = 0xb
    
    if (data_cf65bc != 0)
        char* eax_27 = var_24
        
        if (eax_27 != 0 && *eax_27 != 0)
            char* eax_28 = sub_63d4e0(&var_24)
            int32_t temp9_1 = *(eax_28 + 4)
            *(eax_28 + 4) -= 1
            
            if (temp9_1 == 1)
                sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
    
    var_8_3.b = 3
    esi_1 = arg_4
    eax_22 = var_1c

if (*((edi << 3) + &data_7fcdd8) != 0)
    int32_t edx_18 = *((edi << 3) + &data_7fcddc)
    var_8_3.b = 0xc
    char** ecx_34 = &var_24
    var_18 = &data_801800
    int32_t var_28_1 = 2
    
    if (edx_18 == 7)
        edx_18.b = 0
        var_8_3.b = 0xd
        sub_63d850(&var_18, sub_603160(eax_22, edx_18, ecx_34, arg6, arg7))
        var_8_3.b = 0xe
        
        if (data_cf65bc != 0)
            char* eax_33 = var_24
            
            if (eax_33 != 0 && *eax_33 != 0)
                char* eax_34 = sub_63d4e0(&var_24)
                int32_t temp5_1 = *(eax_34 + 4)
                *(eax_34 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_64c080(eax_34, *(eax_34 + 0xc) + 0x10)
        
        var_8_3.b = 0xc
        uint32_t eax_35 = sub_4c89a0()
        
        if (eax_35 == 0x11)
            sub_692c20(eax_35, &var_18, eax_35, var_1c)
    else
        var_8_3.b = 0xf
        sub_63d850(&var_18, sub_604040(eax_22, edx_18, ecx_34, arg6, eax_22))
        var_8_3.b = 0x10
        
        if (data_cf65bc != 0)
            char* eax_30 = var_24
            
            if (eax_30 != 0 && *eax_30 != 0)
                char* eax_31 = sub_63d4e0(&var_24)
                int32_t temp6_1 = *(eax_31 + 4)
                *(eax_31 + 4) -= 1
                
                if (temp6_1 == 1)
                    sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
        
        var_8_3.b = 0xc
    
    void* edi_1 = var_18
    uint32_t edx_24 = &data_801800
    void* eax_36 = &data_801800
    
    if (edi_1 != 0)
        eax_36 = edi_1
    
    int32_t eax_37 = temp1 * 3
    
    if (esi_1 != 0)
        edx_24 = esi_1
    
    var_8_3.b = 0x11
    sub_63d850(&arg_4, sub_63dfa0(eax_37, edx_24, &var_24, *((eax_37 << 3) + &data_7fcdd8), eax_36))
    var_8_3.b = 0x12
    
    if (data_cf65bc != 0)
        char* eax_39 = var_24
        
        if (eax_39 != 0 && *eax_39 != 0)
            char* eax_40 = sub_63d4e0(&var_24)
            int32_t temp10_1 = *(eax_40 + 4)
            *(eax_40 + 4) -= 1
            
            if (temp10_1 == 1)
                sub_64c080(eax_40, *(eax_40 + 0xc) + 0x10)
    
    int32_t var_28_2 = 0
    var_8_3.b = 0x13
    
    if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
        char* eax_41 = sub_63d4e0(&var_18)
        int32_t temp11_1 = *(eax_41 + 4)
        *(eax_41 + 4) -= 1
        
        if (temp11_1 == 1)
            sub_64c080(eax_41, *(eax_41 + 0xc) + 0x10)
    
    var_8_3.b = 3
    esi_1 = arg_4

*arg3 = esi_1

if (esi_1 != 0 && *esi_1 != 0)
    char* eax_42 = sub_63d4e0(arg3)
    *(eax_42 + 4) += 1

int32_t var_28_3 = 1
int32_t var_8_4 = 0x14

if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
    char* eax_43 = sub_63d4e0(&arg_4)
    int32_t temp4_1 = *(eax_43 + 4)
    *(eax_43 + 4) -= 1
    
    if (temp4_1 == 1)
        sub_64c080(eax_43, *(eax_43 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
