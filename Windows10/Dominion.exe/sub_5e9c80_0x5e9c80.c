// 函数: sub_5e9c80
// 地址: 0x5e9c80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76a201
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t* ecx
int32_t* edx
ecx, edx = __chkstk(0xee08)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = ecx
int32_t* var_5954 = esi
int32_t* eax_3 = data_cc8d5c
char const* const var_38_12
int32_t var_34_16
char const* const var_30_15
char* ecx_27

if (eax_3 == 0)
label_5ea50e:
    var_30_15 = "GetClient"
    var_34_16 = 0x7b
    var_38_12 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_27 = "gClient"
label_5ea524:
    sub_63b870(eax_3, &data_801800, ecx_27, var_38_12, var_34_16, var_30_15)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

uint32_t count = 0x5f080
int32_t c = 0
eax_3[0x1d64] = 0xffffffff
memset(edx, c, count)
int32_t eax_5
int32_t edx_1
edx_1:eax_5 = sx.q(esi[4])
int32_t eax_6
int32_t edx_2
eax_6, edx_2 = __allmul(eax_5, edx_1, 0x4c957f2d, 0x5851f42d)
*edx = eax_6 + 1
edx[1] = adc.d(edx_2, 0, eax_6 u>= 0xffffffff)
edx[2] = 1
edx[3] = 0
int32_t edx_4 = esi[0xc]

if (edx_4 s> 0x18)
    edx_4 = 0x18

edx[0x352] = edx_4
edx[0x34e] = esi[0x46a]
edx[0x350] = esi[7]
edx[0x351] = esi[8]
char* eax_12 = esi[0xf]

if (eax_12 == 0 || *eax_12 == 0)
    esi[0xe]
    void var_a178
    void var_87e8
    memcpy(&var_87e8, sub_4deeb0(&var_a178), 0x1990)
    int32_t var_70dc
    int32_t var_594c_1 = var_70dc
    
    if (var_70dc == 0)
        var_594c_1 = esi[0xd]
    
    edx[0x352]
    esi[0xe]
    void var_bb08
    void var_3fb8
    memcpy(&var_3fb8, sub_4deeb0(&var_bb08), 0x1990)
    void var_3f18
    void* eax_19 = &var_3f18
    int32_t i_4 = 0
    int32_t edx_6 = 0
    
    while (*eax_19 != 0)
        edx_6 += 1
        i_4 += 1
        eax_19 += 0x48
        
        if (edx_6 s>= 4)
            break
    
    if (i_4 s> 0)
        void* edx_7 = &var_3fb8
        int32_t i
        
        do
            edx_7 += 0x10
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    esi[0xc]
    void var_63e8
    void var_760
    __builtin_memcpy(&var_760, sub_5904d0(&var_63e8, var_594c_1), 0x534)
    int32_t var_14_1 = 0
    char* var_5964
    sub_63d850(&esi[0xf], sub_4dfb20(&var_5964, &var_760))
    int32_t var_14_2 = 1
    
    if (data_cf65bc != 0)
        char* eax_22 = var_5964
        
        if (eax_22 != 0 && *eax_22 != 0)
            char* eax_23 = sub_63d4e0(&var_5964)
            int32_t temp6_1 = *(eax_23 + 4)
            *(eax_23 + 4) -= 1
            
            if (temp6_1 == 1)
                sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)
                var_5964 = &data_801800
    
    int32_t var_14_3 = 0xffffffff
    void var_228
    memset(&var_228, 0, 0x200)
    void var_8624
    void* ecx_10 = &var_8624
    
    for (int32_t i_1 = 0; i_1 s< 0x80; )
        int32_t edx_11 = i_1 << 2
        
        if (*(ecx_10 - 4) == 1)
            *(&var_228 + edx_11) = *ecx_10
        
        void var_224
        
        if (*(ecx_10 + 0xc) == 1)
            *(&var_224 + edx_11) = *(ecx_10 + 0x10)
        void var_220
        
        if (*(ecx_10 + 0x1c) == 1)
            *(&var_220 + edx_11) = *(ecx_10 + 0x20)
        int32_t var_21c[0x78]
        
        if (*(ecx_10 + 0x2c) == 1)
            var_21c[i_1] = *(ecx_10 + 0x30)
        i_1 += 4
        ecx_10 += 0x40
    
    void var_70d8
    char* var_595c
    sub_4e5370(&var_228, &var_70d8, &var_595c, &var_228)
    int32_t var_14_4 = 2
    char* eax_29 = var_595c
    
    if (eax_29 != 0 && *eax_29 != 0)
        char* ecx_12 = var_5954[0xf]
        char* const edx_13 = &data_801800
        char* var_30_8 = eax_29
        
        if (ecx_12 != 0)
            edx_13 = ecx_12
        
        char* const var_34_8 = edx_13
        var_14_4.b = 3
        char* var_5968
        sub_63d850(&var_5954[0xf], sub_63df30(&var_5968, "-k %s -x %s"))
        var_14_4.b = 4
        
        if (data_cf65bc != 0)
            char* eax_31 = var_5968
            
            if (eax_31 != 0 && *eax_31 != 0)
                char* eax_32 = sub_63d4e0(&var_5968)
                int32_t temp7_1 = *(eax_32 + 4)
                *(eax_32 + 4) -= 1
                
                if (temp7_1 == 1)
                    sub_64c080(eax_32, *(eax_32 + 0xc) + 0x10)
                    var_5968 = &data_801800
        
        var_14_4.b = 2
    
    var_5954[0xd] = var_594c_1
    var_5954[0xf]
    var_5954[0xe]
    void var_d498
    void var_5948
    memcpy(&var_5948, sub_4dec00(&var_d498, var_5954[0xc], 0x1990, eax_2, arg3, arg2, var_20, arg1))
    var_5954[0xc]
    void var_6920
    void var_c98
    __builtin_memcpy(&var_c98, sub_5904d0(&var_6920, var_594c_1), 0x534)
    void* ecx_19 = &var_760
    int32_t i_6 = 0x530
    void* esi_4 = &var_c98
    int32_t i_2
    
    do
        if (*ecx_19 != *esi_4)
            void var_5978
            sub_4dfb20(&var_5978, &var_c98)
            var_14_4.b = 5
            char* eax_71 = sub_63d7e0(&esi[0xf])
            char* var_30_17 = sub_63d7e0(&var_5978)
            char* var_34_17 = eax_71
            sub_63b870(sub_63b7f0("error regenerating kingdom\n  %s\n  %s"), &data_801800, "Halt", 
                "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x5a16, "DomGameLoad")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        ecx_19 += 4
        esi_4 += 4
        i_2 = i_6
        i_6 -= 4
    while (i_2 u>= 4)
    int32_t eax_38 = data_cc8d5c
    
    if (eax_38 == 0)
        sub_63b870(eax_38, &data_801800, "gClient", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    esi = var_5954
    
    if (*(eax_38 + 0x5068) == 1)
        sub_4da3a0(esi, *esi)
    
    int32_t var_14_5 = 6
    
    if (data_cf65bc != 0)
        char* eax_39 = var_595c
        
        if (eax_39 != 0 && *eax_39 != 0)
            char* eax_40 = sub_63d4e0(&var_595c)
            int32_t temp9_1 = *(eax_40 + 4)
            *(eax_40 + 4) -= 1
            
            if (temp9_1 == 1)
                sub_64c080(eax_40, *(eax_40 + 0xc) + 0x10)
                var_595c = &data_801800
    
    int32_t var_14_6 = 0xffffffff

esi[0xf]
esi[0xe]
void var_ee28
void var_2628
memcpy(&var_2628, sub_4dec00(&var_ee28, esi[0xc], 0x1990, eax_2, arg3, arg2, var_20, arg1))
void var_2588
void* eax_44 = &var_2588
int32_t i_5 = 0
int32_t edx_23 = 0

while (*eax_44 != 0)
    edx_23 += 1
    i_5 += 1
    eax_44 += 0x48
    
    if (edx_23 s>= 4)
        break

if (i_5 s> 0)
    void* edx_24 = &var_2628
    int32_t i_3
    
    do
        edx_24 += 0x10
        i_3 = i_5
        i_5 -= 1
    while (i_3 != 1)

memcpy(0xbdfb60, &var_2628, 0x1990)
esi[0xc]
void var_6e58
void var_5eb0
__builtin_memcpy(&var_5eb0, sub_5904d0(&var_6e58, esi[0xd]), 0x534)
__builtin_memcpy(&edx[0x353], &var_5eb0, 0x534)
void var_f18
__builtin_memcpy(&edx[0x4a0], &var_f18, 0x280)
edx[0x541] = 2
*(edx + 0x1508) = *arg5
edx[0x17c20] = sub_6a9170(sub_58d3f0, edx)
sub_6a93a0(&edx[0x17c20])
bool cond:3_1 = edx[0x688] == 0
edx[0x541] = 1
int32_t* result

if (not(cond:3_1))
    eax_3 = sub_4b9480()
    
    if (eax_3 == var_5954)
        int32_t eax_49 = data_b824f8
        int32_t esi_6 = data_b824a4
        data_b81810
        int32_t edi_5 = data_b80b48
        int32_t eax_54 = divs.dp.d(sx.q(data_b824b8 - 1), data_b81810) + 1
        int32_t ecx_28
        
        if (esi_6 == edi_5)
            ecx_28 = data_b824bc
            
            if ((data_b80b40 & 8) != 0)
                ecx_28 = 0xffffffff
        else
            ecx_28 = 0xffffffff
        
        result = arg4
        *result = 1
        result[1] = eax_49
        result[2] = esi_6
        result[3] = edi_5
        result[4] = ecx_28
        result[5] = eax_54
        goto label_5ea2c9
    
    var_30_15 = "DomGameLoad"
    var_34_16 = 0x5a33
    var_38_12 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_27 = "&ActiveGame() == &save"
    goto label_5ea524

int32_t eax_55 = sub_5e99a0(var_5954, edx[0x1b])
int32_t eax_56 = 0

if (eax_55 != 0xffffffff)
    eax_56 = eax_55

eax_3[0x1d64] = eax_56

if (edx[0x1c] != eax_56)
    sub_5e9a30(eax_56)
else
    sub_5e9a30(edx[0x1b])
    
    if (edx[0x674] != edx[0x673])
        data_b604cc = 2

if (eax_55 != 0xffffffff)
    sub_4b0b30(eax_56)

int32_t eax_58 = data_b824f8
int32_t ecx_38 = data_b824a4
data_b81810
int32_t edi_6 = data_b80b48
int32_t eax_63 = divs.dp.d(sx.q(data_b824b8 - 1), data_b81810) + 1
int32_t ecx_39

if (ecx_38 == edi_6)
    ecx_39 = data_b824bc
    
    if ((data_b80b40 & 8) != 0)
        ecx_39 = 0xffffffff
else
    ecx_39 = 0xffffffff

*arg4 = 0
arg4[1] = eax_58
arg4[2] = ecx_38
arg4[3] = edi_6
arg4[4] = ecx_39
arg4[5] = eax_63
int32_t var_5974
int32_t var_5970
eax_3 = sub_5e9bb0(&var_5974, &var_5970, var_5954, &var_5974)

if (eax_3.b == 0)
    void* ecx_42 = data_cc8d5c
    
    if (ecx_42 == 0)
        goto label_5ea50e
    
    if (*(ecx_42 + 0x5068) == 2 && edx[0x1c] != *(ecx_42 + 0x7590))
        sub_4b4e70(*var_5954, arg4)
else
    sub_618820(var_5974, var_5970)

data_b809a8 = sub_5e9c30(edx)
int32_t* ecx_46 = *(sub_611d90(var_5954, edx) + 0x14)

if (ecx_46 == 0)
    ecx_46 = (&data_86ec80)[modu.dp.d(0:(var_5954[0xd]), 5)]

sub_4b80c0(*ecx_46)
result = arg4
label_5ea2c9:
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
