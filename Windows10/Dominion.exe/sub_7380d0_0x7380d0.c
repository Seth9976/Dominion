// 函数: sub_7380d0
// 地址: 0x7380d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_772d88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_f8 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = arg3[7]
char eax_4 = 0

if (data_cc8ddc != 0)
    eax_4 = 1

int32_t* var_3c = nullptr
int32_t var_38 = 0
int32_t var_34 = 0
int32_t var_8_1 = 0
var_3c = sub_64c020(0x70000)
int32_t var_38_1 = 0
int32_t var_34_1 = 0x4000
sub_737200(arg2, &var_3c)
int32_t* var_58 = nullptr
int32_t var_54 = 0
int32_t var_50 = 0
var_8_1.b = 1
int32_t var_4c = 0
int32_t* eax_6 = sub_64c020(var_34_1 * 0x1c)
int32_t* edi = arg3[9]
var_58 = eax_6
int32_t var_54_1 = 0
int32_t* var_48 = edi
int32_t* var_64 = nullptr
int32_t var_60 = 0
int32_t var_5c = 0
int32_t* var_fc = edi
var_8_1.b = 2
uint32_t result = sub_7374d0(var_34_1, arg3[5], arg3[6], &var_58, var_fc)
int32_t* ebx_1 = nullptr
uint32_t result_1 = result
int32_t* var_30 = nullptr

if (result s> 0)
    int32_t var_78 = 8
    
    do
        char* const ecx_4 = &data_801800
        var_fc = ebx_1
        char* eax_9 = *arg4
        int32_t esi_3 = *arg3
        
        if (eax_9 != 0)
            ecx_4 = eax_9
        
        int32_t var_100_1 = esi_3
        char* const var_104_1 = ecx_4
        int32_t* var_1c
        sub_63df30(&var_1c, "%s-%s-%d.png")
        char* const ecx_5 = &data_801800
        var_8_1.b = 3
        var_fc = ebx_1
        int32_t var_100_2 = esi_3
        char* eax_11 = *arg4
        
        if (eax_11 != 0)
            ecx_5 = eax_11
        
        char* const var_104_2 = ecx_5
        char* var_20
        sub_63df30(&var_20, "%s-%s-%d.texture")
        int128_t var_e8
        __builtin_memset(&var_e8, 0, 0x30)
        var_8_1.b = 5
        int32_t* var_b8_1 = edi
        int32_t var_a8_1 = eax_3
        int32_t eax_12 = sub_6a9570(eax_3, edi)
        var_fc = edi
        int32_t* eax_13 = sub_6a9660(eax_12, eax_3, eax_3, var_fc)
        int32_t* var_b4_1 = eax_13
        int32_t* eax_14 = sub_687730(eax_13)
        var_fc = eax_13
        memset(eax_14, 0, var_fc)
        char* edx_3 = var_20
        int32_t* var_ac_1 = eax_14
        char* const ecx_9 = &data_801800
        
        if (edx_3 != 0)
            ecx_9 = edx_3
        
        int32_t eax_15 = sub_69f030(ecx_9, 3)
        var_fc = &var_78
        int32_t var_a4_1 = eax_15
        QueryPerformanceCounter(var_fc)
        int32_t var_a0_1 = var_78
        int32_t var_9c_1 = arg3[5]
        int32_t var_98_1 = arg3[6]
        var_fc = &var_58
        int32_t eax_19
        int32_t* ecx_12
        void* edx_5
        eax_19, ecx_12, edx_5 = sub_737ce0(&var_64, &var_3c, &var_e8, &var_64, var_30, var_fc)
        int32_t esi_5 = 8
        
        if (eax_19 s> 8)
            esi_5 = eax_19
        
        void* eax_20 = 8
        int32_t var_44_1 = esi_5
        
        if (edx_5 s> 8)
            eax_20 = edx_5
        
        void* var_2c_1 = eax_20
        
        if (eax_4 != 0)
            int32_t ecx_14 = (esi_5 - 1) | (esi_5 - 1) u>> 1
            int32_t ecx_15 = ecx_14 | ecx_14 u>> 2
            int32_t ecx_16 = ecx_15 | ecx_15 u>> 4
            int32_t ecx_17 = ecx_16 | ecx_16 u>> 8
            var_44_1 = (ecx_17 u>> 0x10 | ecx_17) + 1
            int32_t ecx_20 = (var_2c_1 - 1) | (var_2c_1 - 1) u>> 1
            int32_t ecx_21 = ecx_20 | ecx_20 u>> 2
            int32_t ecx_22 = ecx_21 | ecx_21 u>> 4
            int32_t ecx_23 = ecx_22 | ecx_22 u>> 8
            ecx_12 = ecx_23 | ecx_23 u>> 0x10
            var_2c_1 = ecx_12 + 1
        
        int32_t* eax_44 = var_1c
        var_fc = ecx_12
        var_fc = eax_44
        char* eax_45 = var_1c
        
        if (eax_45 != 0 && *eax_45 != 0)
            char* eax_46 = sub_63d4e0(&var_fc)
            *(eax_46 + 4) += 1
        
        var_8_1.b = 6
        char* const var_28
        char* eax_48 = *sub_6a0010(&var_28)
        char* edx_6 = &data_801800
        
        if (eax_48 != 0)
            edx_6 = eax_48
        
        char* var_18
        sub_6c4050(&var_18, edx_6)
        var_8_1.b = 9
        
        if (data_cf65bc != 0)
            char* eax_49 = var_28
            
            if (eax_49 != 0 && *eax_49 != 0)
                char* eax_50 = sub_63d4e0(&var_28)
                int32_t temp0_1 = *(eax_50 + 4)
                *(eax_50 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_50, *(eax_50 + 0xc) + 0x10)
                    var_28 = &data_801800
        
        var_8_1.b = 8
        char* const ecx_29 = &data_801800
        char* eax_51 = var_18
        
        if (eax_51 != 0)
            ecx_29 = eax_51
        
        sub_69db50(ecx_29)
        char* eax_52 = var_18
        int32_t* var_8c = eax_14
        char* esi_6 = &data_801800
        
        if (eax_52 != 0)
            esi_6 = eax_52
        
        int32_t var_88_1 = var_44_1
        void* var_84_1 = var_2c_1
        int32_t* var_7c_1 = var_48
        int32_t var_80_1 = eax_12
        
        if (sub_72ea50(&var_8c, esi_6) == 0)
            var_fc = esi_6
            sub_63b5f0("PNGExportTexture: Failed to write %s")
            
            if (eax_14 != 0)
                var_fc = eax_14
                _aligned_free(var_fc)
            
            char* eax_58 = var_18
            char* ecx_31 = &data_801800
            
            if (eax_58 != 0)
                ecx_31 = eax_58
            
            var_fc = ecx_31
            sub_63b5f0("AtlasMaker: failed to png write %s")
        
        if (eax_14 != 0)
            var_fc = eax_14
            _aligned_free(var_fc)
        
        int32_t eax_59 = sub_69ec60(eax_15)
        var_fc = nullptr
        char* eax_60 = sub_69f4a0(eax_59, 1, eax_15, var_fc.b)
        
        if (*(eax_15 + 4) != 3)
            var_fc = "TextureGetDef"
            sub_63b870(eax_60, &data_801800, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
                "C:\x\ax2017\Engine\Texture.h", 0x89, var_fc)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int32_t* eax_61 = sub_5af880(eax_15)
        *(*eax_61 + 0x30) = var_78
        sub_6960b0(eax_15)
        var_8_1.b = 0xa
        
        if (data_cf65bc != 0)
            char* eax_63 = var_18
            
            if (eax_63 != 0 && *eax_63 != 0)
                char* eax_64 = sub_63d4e0(&var_18)
                int32_t temp1_1 = *(eax_64 + 4)
                *(eax_64 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_64, *(eax_64 + 0xc) + 0x10)
                    var_18 = &data_801800
        
        var_8_1.b = 0xb
        int128_t var_d8
        sub_73a890(&var_d8:8)
        var_8_1.b = 0xc
        sub_7078c0(&var_e8:0xc)
        var_8_1.b = 0xd
        sub_73a850(&var_e8)
        var_8_1.b = 0xe
        
        if (data_cf65bc != 0)
            char* eax_65 = var_20
            
            if (eax_65 != 0 && *eax_65 != 0)
                char* eax_66 = sub_63d4e0(&var_20)
                int32_t temp2_1 = *(eax_66 + 4)
                *(eax_66 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_66, *(eax_66 + 0xc) + 0x10)
                    var_20 = &data_801800
        
        var_8_1.b = 0xf
        
        if (data_cf65bc != 0)
            int32_t* eax_67 = var_1c
            
            if (eax_67 != 0 && *eax_67 != 0)
                char* eax_68 = sub_63d4e0(&var_1c)
                int32_t temp3_1 = *(eax_68 + 4)
                *(eax_68 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_68, *(eax_68 + 0xc) + 0x10)
                    var_1c = &data_801800
        
        result = result_1
        ebx_1 = var_30 + 1
        edi = var_48
        var_8_1.b = 2
        var_30 = ebx_1
    while (ebx_1 s< result)

var_8_1.b = 0x10

if (data_cf65bc != 0)
    int32_t* ecx_46 = var_64
    
    if (ecx_46 != 0)
        sub_64c080(ecx_46, var_5c * 0x18)

var_8_1.b = 0x11

if (data_cf65bc != 0)
    int32_t* ecx_47 = var_58
    
    if (ecx_47 != 0)
        sub_64c080(ecx_47, var_34_1 * 0x1c)

int32_t var_8_2 = 0x12

if (data_cf65bc != 0)
    int32_t* ecx_48 = var_3c
    
    if (ecx_48 != 0)
        sub_64c080(ecx_48, var_34_1 * 0x1c)

fsbase->NtTib.ExceptionList = ExceptionList
return result
