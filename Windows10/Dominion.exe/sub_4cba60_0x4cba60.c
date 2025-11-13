// 函数: sub_4cba60
// 地址: 0x4cba60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$common_find_first_narrow@U_wfinddata32_t@@U_finddata32_t@@@@YAHQBDQAU_finddata32_t@@I@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_26c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_3 = sub_64e7a0(arg1)
int32_t ecx_1 = data_cc8d80
*(eax_3 + 0x18bc) = sub_4c9f00
void* var_254
int32_t i_1 = sub_571bc0(ecx_1, &var_254)
void* esi = nullptr
int32_t var_214[0x80]

if (i_1 s> 0)
    void* ecx_2 = var_254
    int32_t i
    
    do
        int32_t eax_5 = *(ecx_2 + 4)
        
        if (eax_5 != 3 && eax_5 != 7)
            var_214[esi] = ecx_2
            esi += 1
        
        ecx_2 += 0x44
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t ecx_3 = 0
int32_t eax_6 = 0
void* const ecx_4

while (true)
    if (*(eax_6 + &data_780878) == 0x100002)
        ecx_4 = ecx_3 * 0x10c + &data_780878
        break
    
    eax_6 += 0x10c
    ecx_3 += 1
    
    if (eax_6 u>= 0x28d4)
        ecx_4 = &data_780878
        break

int32_t var_24c
sub_4be540(ecx_4, &var_24c)
int32_t var_240
bool cond:0 = var_240 == 1
int32_t ecx_6 = data_cc8d80
int32_t ebx = data_cc8d8c
char edx_2

if (ecx_6 != 0 || ebx != 0)
    edx_2 = 0
else
    edx_2 = 1

int32_t eax_7 = var_24c
char var_24e_1

if (eax_7 != 3)
    var_24e_1 = 0

if (eax_7 == 3 || eax_7 == 2)
    var_24e_1 = 1

char var_250_1

if (edx_2 != 0)
    var_250_1 = 1

int32_t var_248
int32_t var_244

if (edx_2 == 0 || var_248 s>= var_244)
    var_250_1 = 0

int32_t eax_10
int32_t edx_3
edx_3:eax_10 = sx.q(esi + 7)
var_254 = ((edx_3 & 7) + eax_10) s>> 3

if (ecx_6 == 0)
    int32_t eax_12
    int32_t edx_7
    edx_7:eax_12 = sx.q(esi + 0xb)
    var_254 = (eax_12 + (edx_7 & 7)) s>> 3

void* const eax_15 = 8

if (ecx_6 == 0 && ebx == 0)
    eax_15 = 4

void* ecx_8 = eax_15 * ebx

if (data_cc8d80 == 0 && ebx s> 0)
    ecx_8 -= 4

void* eax_16 = eax_15 + ecx_8
void* edx_9 = esi

if (esi s>= eax_16)
    edx_9 = eax_16

void* eax_17 = data_cc8d80

if (eax_17 == 2)
    if (ebx != 0)
        ecx_8 = (ebx << 3) + 0xffffffff
        edx_9 = ecx_8 + 8
    else
        ecx_8 = nullptr
        edx_9 = eax_17 + 5
    
    if (esi s< edx_9)
        edx_9 = esi

void* var_270 = edx_9
int32_t eax_19 = sub_4cabd0(&var_214, edx_9, arg1, &var_214, ecx_8, eax_17, ecx_8)
int32_t var_284 = 0xffffffff
sub_666120(eax_19, &data_8dc350, arg1, eax_19)
int32_t eax_20 = data_cc8d80
void* result
uint32_t eax_26

if (eax_20 == 0)
    uint32_t eax_27 = sub_64e7a0(arg1)
    sub_665db0(eax_27, &data_8dc458, eax_27, 0x3f800000, 0xffffffff, 0)
    
    if (edx_2 != 0)
        uint32_t eax_29 = sub_64e7a0(arg1)
        sub_665db0(eax_29, &data_8dc470, eax_29, 0x3f800000, 0xffffffff, 0)
    
    bool eax_28 = cond:0
    
    if (eax_28 != 0 && var_24e_1 != 0)
        uint32_t eax_30 = sub_64e7a0(arg1)
        sub_665db0(eax_30, &data_8dc47c, eax_30, 0x3f800000, 0xffffffff, 0)
        eax_28 = cond:0
    
    if (var_250_1 != 0)
        if (eax_28 != 0)
            uint32_t eax_32 = sub_64e7a0(arg1)
            sub_665db0(eax_32, &data_8dc494, eax_32, 0x3f800000, 0xffffffff, 0)
            int32_t var_25c = 3
            char* const var_258 = 0x100002
            int32_t* eax_33 = sub_571c40(&var_25c)
            var_258 = &data_801800
            int32_t var_8_1 = 0
            
            if (sub_64bba0(eax_33, &var_258) != 0)
                uint32_t eax_35 = sub_64e7a0(arg1)
                sub_665db0(eax_35, &data_8dc4a0, eax_35, 0x3f800000, 0xffffffff, 0)
                int32_t var_278_1 = 0xffffffff
                sub_666380(&var_258, &data_8dc4ac, arg1, &var_258)
            
            int32_t var_8_2 = 1
            
            if (data_cf65bc != 0)
                char* const eax_37 = var_258
                
                if (eax_37 != 0 && *eax_37 != 0)
                    char* eax_38 = sub_63d4e0(&var_258)
                    int32_t temp4_1 = *(eax_38 + 4)
                    *(eax_38 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_64c080(eax_38, *(eax_38 + 0xc) + 0x10)
            
            int32_t var_8_3 = 0xffffffff
        else
            uint32_t eax_31 = sub_64e7a0(arg1)
            sub_665db0(eax_31, &data_8dc488, eax_31, 0x3f800000, 0xffffffff, 0)
    
    int32_t ecx_32 = data_cc8d8c
    result = var_254 - 1
    
    if (ecx_32 s< result)
        uint32_t eax_40 = sub_64e7a0(arg1)
        result = sub_665db0(eax_40, &data_8dbdd0, eax_40, 0x3f800000, 0xffffffff, 0)
        ecx_32 = data_cc8d8c
    
    if (ecx_32 s> 0)
        eax_26 = sub_64e7a0(arg1)
        result = sub_665db0(eax_26, &data_8dbdc4, eax_26, 0x3f800000, 0xffffffff, 0)
else if (eax_20 == 1)
    eax_26 = sub_64e7a0(arg1)
    result = sub_665db0(eax_26, &data_8dc464, eax_26, 0x3f800000, 0xffffffff, 0)
else
    if (eax_20 != 2)
        sub_63b870(eax_20 - 2, &data_801800, "Halt", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 0x24a9, "StoreUpdate")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    uint32_t eax_24
    void** edx_10
    void** esi_1
    
    if (data_cc8d8c != eax_20 - 2)
        eax_24 = sub_64e7a0(arg1)
        esi_1 = &data_8dbdc4
        edx_10 = &data_8dc44c
    else
        eax_24 = sub_64e7a0(arg1)
        esi_1 = &data_8dbdd0
        edx_10 = &data_8dc440
    
    sub_665db0(eax_24, edx_10, eax_24, 0x3f800000, 0xffffffff, 0)
    uint32_t eax_25 = sub_64e7a0(arg1)
    result = sub_665db0(eax_25, esi_1, eax_25, 0x3f800000, 0xffffffff, 0)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
