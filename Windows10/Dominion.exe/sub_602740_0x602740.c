// 函数: sub_602740
// 地址: 0x602740
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?link_target@?$source_block@V?$multi_link_registry@V?$ITarget@I@Concurrency@@@Concurrency@@V?$ordered_message_processor@I@2@@Concurrency@@UAEXPAV?$ITarget@I@2@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_48 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_b80b44 == arg2)
    void* ecx = data_cc8d5c
    
    if (ecx == 0)
        sub_63b870(&ExceptionList, &data_801800, "gClient", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (data_b80b48 != *(ecx + 0x7590) && data_b824dc == 0)
        int32_t* eax_5 = sub_4b9480()
        int32_t edx = 0
        int32_t esi_1 = eax_5[0x46a]
        
        if (esi_1 s> 0)
            void* ecx_1 = &eax_5[0x1a]
            
            do
                int32_t eax_6 = *ecx_1
                
                if (eax_6 == 0x3e9)
                    goto label_6027f6
                
                if (eax_6 == 0x3ec)
                    goto label_6027f6
                
                if (eax_6 == 0x3ed)
                    goto label_6027f6
                
                edx += 1
                ecx_1 += 0x22c
            while (edx s< esi_1)
        
        uint32_t eax_7 = sub_64e7a0(arg1)
        sub_665db0(eax_7, &data_be4bdc, eax_7, 0x3f800000, 0xffffffff, 0)

label_6027f6:

if (sub_4b9480()[0x46a] == 6)
label_60281b:
    
    if (data_b604e4 != arg2)
        uint32_t eax_11 = sub_64e7a0(arg1)
        sub_665db0(eax_11, &data_be4d38, eax_11, 0x3f800000, 0xffffffff, 0)
else if (sub_4b9480()[0x46a] == 5 && sub_4aec30() == 0)
    goto label_60281b

void* eax_12 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
int32_t* eax_13 = sub_4b9480()

if ((*(eax_12 + 0x42d4) & 4) == 0 && (eax_13[8].b & 4) != 0)
    uint32_t eax_14 = sub_64e7a0(arg1)
    sub_665db0(eax_14, &data_be4d20, eax_14, 0x3f800000, 0xffffffff, 0)

if (data_b604e4 == arg2)
    uint32_t eax_15 = sub_64e7a0(arg1)
    sub_665db0(eax_15, &data_be4c6c, eax_15, 0x3f800000, 0xffffffff, 0)

char* const result_3 = &data_801800
int32_t var_8_1 = 0
char* const result_1 = &data_801800
char* const result_2 = &data_801800
var_8_1.b = 2
int32_t ebx
ebx.b = sub_6022d0(&result_1, &result_2)
int32_t var_54 = 0xffffffff
sub_666380(&result_3, &data_be4c54, arg1, &result_3)
int32_t var_5c = 0xffffffff
sub_666380(&result_2, &data_be4c60, arg1, &result_2)
int32_t var_64 = 0xffffffff
sub_666380(&result_1, &data_be4c48, arg1, &result_1)
int32_t var_6c = 0xffffffff
sub_666380(&result_3, &data_be4c3c, arg1, &result_3)
uint32_t eax_21 = sub_64e7a0(arg1)
void** edx_1 = &data_be4c24

if (ebx.b != 0)
    edx_1 = &data_be4c30

sub_665db0(eax_21, edx_1, eax_21, 0x3f800000, 0xffffffff, 0)
void* eax_22 = sub_4b9680(&eax_13[2], arg2)
char* var_1c
char* result_4
sub_4b06c0(eax_22, &eax_13[2], &result_4, eax_22, &var_1c)
var_8_1.b = 3
void* eax_23 = sub_624450(var_1c)
int32_t* eax_24 = sub_4b9480()

if (eax_24[0x46a] s>= 5 && data_b604e4 != arg2)
    var_8_1.b = 4
    sub_63d850(&result_4, sub_597aa0(eax_24, eax_13, &var_1c, arg2))
    var_8_1.b = 5
    
    if (data_cf65bc != 0)
        char* eax_26 = var_1c
        
        if (eax_26 != 0 && *eax_26 != 0)
            char* eax_27 = sub_63d4e0(&var_1c)
            int32_t temp1_1 = *(eax_27 + 4)
            *(eax_27 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
                var_1c = &data_801800
    
    var_8_1.b = 3

uint32_t eax_28 = sub_64e7a0(arg1)
sub_665db0(eax_28, eax_23, eax_28, 0x3f800000, 0xffffffff, 0)
int32_t var_54_1 = 0xffffffff
sub_666380(&result_4, &data_be4bc4, arg1, &result_4)
void* var_30

if (sub_4c3550(&var_1c, arg2, eax_13, &var_1c, &var_30) != 0)
    uint32_t eax_32 = sub_64e7a0(arg1)
    sub_665db0(eax_32, &data_be4ce4, eax_32, 0x3f800000, 0xffffffff, 0)

void* eax_33 = sub_5cc5e0(arg2)
var_30 = eax_33
int32_t var_4c_3 = *(eax_33 + 0x24)
sub_63df30(&var_1c, "%d")
var_8_1.b = 6
int32_t var_58_2 = 0xffffffff
sub_666380(&var_1c, &data_be4bd0, arg1, &var_1c)
var_8_1.b = 7

if (data_cf65bc != 0)
    char* eax_35 = var_1c
    
    if (eax_35 != 0 && *eax_35 != 0)
        char* eax_36 = sub_63d4e0(&var_1c)
        int32_t temp0_1 = *(eax_36 + 4)
        *(eax_36 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_36, *(eax_36 + 0xc) + 0x10)
            var_1c = &data_801800

var_8_1.b = 3
int32_t eax_37 = data_b604e0

if (eax_37 == 0xffffffff)
    eax_37 = 0

void* esi_6 = arg2 - eax_37
void* eax_39 = sub_4b95e0() + esi_6

if (esi_6 s>= 0)
    eax_39 = esi_6

int32_t ecx_36 = sub_4b9480()[0x46a]
char const* const var_54_4
int32_t var_50_1
char const* const var_4c_4
void* eax_42
char* ecx_37
void** esi_7

if (ecx_36 == 2)
label_602b52:
    esi_7 = &data_be4ccc
label_602b59:
    uint32_t eax_43 = sub_64e7a0(arg1)
    sub_665db0(eax_43, esi_7, eax_43, 0x3f800000, 0xffffffff, 0)
    void* esi_8 = var_30
    int32_t eax_44 = *(esi_8 + 0x4d24)
    void* eax_45 = eax_44
    
    if (eax_44 == 0)
        goto label_602c82
    
    if (eax_45 == 1)
        uint32_t eax_49 = sub_64e7a0(arg1)
        sub_665db0(eax_49, &data_be4cfc, eax_49, 0x3f800000, 0xffffffff, 0)
        int32_t var_54_3 = *(esi_8 + 0x4d28)
        sub_63df30(&var_1c, "%d")
        var_8_1.b = 8
        int32_t var_60_2 = 0xffffffff
        eax_45 = sub_666380(&var_1c, &data_be4d08, arg1, &var_1c)
        var_8_1.b = 9
        
        if (data_cf65bc != 0)
            eax_45 = var_1c
            
            if (eax_45 != 0 && *eax_45 != 0)
                eax_45 = sub_63d4e0(&var_1c)
                int32_t temp6_1 = *(eax_45 + 4)
                *(eax_45 + 4) -= 1
                
                if (temp6_1 == 1)
                    eax_45 = sub_64c080(eax_45, *(eax_45 + 0xc) + 0x10)
                    var_1c = &data_801800
        
        var_8_1.b = 3
        goto label_602c82
    
    eax_42 = eax_45 - 2
    
    if (eax_45 == 2)
        uint32_t eax_47 = sub_64e7a0(arg1)
        sub_665db0(eax_47, &data_be4cfc, eax_47, 0x3f800000, 0xffffffff, 0)
        uint32_t eax_48 = sub_64e7a0(arg1)
        eax_45 = sub_665db0(eax_48, &data_be4d14, eax_48, 0x3f800000, 0xffffffff, 0)
    label_602c82:
        int32_t eax_51 = sub_5d1210(eax_45, 0x3ec, arg2, 0, 0)
        var_30 = sub_5d1210(sub_5d1210(eax_51, 0x3eb, arg2, 0, 0), 0x3ea, arg2, 0, 0)
        int32_t edi_1 = arg2 * 9
        int32_t var_4c_5 = 0
        sub_5d8770(sub_4bb9f0((edi_1 << 2) + &data_1a94bd0, arg1, "tbl_opponent_deck"))
        int32_t* eax_55 = sub_4bb9f0((edi_1 << 2) + &data_1a94ca8, arg1, "tbl_opponent_discard")
        int32_t var_4c_6 = 0
        sub_5d8770(eax_55)
        uint32_t eax_56 = sub_64e7a0(eax_55)
        sub_665db0(eax_56, &data_be4cf0, eax_56, 0x3f800000, 0xffffffff, 0)
        int32_t* eax_57 = sub_4bb9f0((edi_1 << 2) + &data_1a94d80, arg1, "tbl_opponent_hand")
        void* edi_2 = var_30
        int32_t var_4c_7 = 0
        sub_5d8770(eax_57)
        void** edi_3
        
        if (edi_2 s< 5)
            edi_3 = (&data_86ecd4)[edi_2]
        else
            edi_3 = &data_be4d80
        
        uint32_t eax_58 = sub_64e7a0(eax_57)
        sub_665db0(eax_58, edi_3, eax_58, 0x3f800000, 0xffffffff, 0)
        sub_5d8950(arg1, arg2)
        void** esi_12
        
        if (*(eax_22 + 0x14) == 1)
            esi_12 = &data_be4bf4
            
            if (sub_4b9280(*(eax_22 + 0x18)) == 1)
                esi_12 = &data_be4be8
        else
            esi_12 = &data_be4c00
        
        uint32_t eax_61 = sub_64e7a0(arg1)
        sub_665db0(eax_61, esi_12, eax_61, 0x3f800000, 0xffffffff, 0)
        eax_42 = data_cc8d5c
        
        if (eax_42 != 0)
            if (*(eax_42 + 0x5068) != 0)
                char* result = sub_5da050(0xbdfb60)
                
                if (eax_51 == 0 || result == 2 || result == 1)
                    uint32_t eax_62 = sub_64e7a0(arg1)
                    result = sub_665db0(eax_62, &data_be4d2c, eax_62, 0x3f800000, 0xffffffff, 0)
                
                var_8_1.b = 0xa
                
                if (data_cf65bc != 0)
                    result = result_4
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_4)
                        int32_t temp7_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp7_1 == 1)
                            result = sub_64c080(result, *(result + 0xc) + 0x10)
                            result_4 = &data_801800
                
                var_8_1.b = 0xb
                
                if (data_cf65bc != 0)
                    result = result_2
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_2)
                        int32_t temp8_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp8_1 == 1)
                            result = sub_64c080(result, *(result + 0xc) + 0x10)
                
                var_8_1.b = 0xc
                
                if (data_cf65bc != 0)
                    result = result_1
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_1)
                        int32_t temp9_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp9_1 == 1)
                            result = sub_64c080(result, *(result + 0xc) + 0x10)
                
                int32_t var_8_2 = 0xd
                
                if (data_cf65bc != 0)
                    result = result_3
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_3)
                        int32_t temp10_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp10_1 == 1)
                            result = sub_64c080(result, *(result + 0xc) + 0x10)
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            var_4c_4 = "GetActiveConfig"
            var_50_1 = 0x33b6
            ecx_37 = "c.activeGame.gameType != GAME_NONE"
            var_54_4 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        else
            var_4c_4 = "GetClient"
            var_50_1 = 0x7b
            var_54_4 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
            ecx_37 = "gClient"
    else
        var_4c_4 = "DomOpponentLayoutUpdate"
        var_50_1 = 0x950d
        ecx_37 = "Halt"
        var_54_4 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
else
    if (ecx_36 == 3)
        if (eax_39 != 1)
            esi_7 = &data_be4cd8
            goto label_602b59
        
        esi_7 = &data_be4cc0
        goto label_602b59
    
    eax_42 = eax_39 * 2
    
    if (eax_42 == ecx_36)
        goto label_602b52
    
    if (eax_42 s< ecx_36)
        esi_7 = &data_be4cc0
        goto label_602b59
    
    if (eax_42 s> ecx_36)
        esi_7 = &data_be4cd8
        goto label_602b59
    
    var_4c_4 = "GetOpponentAlignement"
    var_50_1 = 0x9494
    ecx_37 = "Halt"
    var_54_4 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
sub_63b870(eax_42, &data_801800, ecx_37, var_54_4, var_50_1, var_4c_4)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
