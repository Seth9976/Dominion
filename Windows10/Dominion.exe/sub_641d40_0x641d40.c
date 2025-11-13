// 函数: sub_641d40
// 地址: 0x641d40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76c621
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_144 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = arg3[1] == 0x25
void* result = arg7
char* result_5 = arg5
char* result_2 = result
char const* const var_150
int32_t var_14c_1
char const* const var_148
char* ecx

if (cond:0)
    void* result_3 = sub_5af880(arg3)
    void* esi_1 = data_147b06c
    void var_138
    int128_t* eax_3
    void* ecx_2
    eax_3, ecx_2 = sub_642e30(&var_138)
    int32_t* __saved_edx_2 = *(esi_1 + 0x2dc)
    int32_t* __saved_edx_1 = __saved_edx_2
    int128_t var_f8 = *eax_3
    int128_t var_e8_1 = eax_3[1]
    int128_t var_d8_1 = eax_3[2]
    int128_t var_c8_1 = eax_3[3]
    
    if (__saved_edx_2 == 0)
        if (data_1a98f60 s> *(*fsbase->ThreadLocalStoragePointer + 8))
            sub_75970e(&data_1a98f60)
            
            if (data_1a98f60 == 0xffffffff)
                int32_t var_14_1 = 0
                data_1a98f64 = sub_69f030("sys/sprite_3d.material", 5)
                int32_t var_14_2 = 0xffffffff
                __Init_thread_footer(&data_1a98f60)
        
        __saved_edx_1 = data_1a98f64
    
    ecx_2.b = *result_5
    int32_t var_90_1 = 0
    float var_80_1 = 0f
    result = *result_2
    void* result_1 = result
    
    if (ecx_2.b == 0)
    label_6420a3:
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    
    while (true)
        if (ecx_2.b u< 0x80)
        label_641eb7:
            result_2 = result_5
            result = sub_5a0d00(&result_2)
            char edx = *result_5
            void* result_4 = result
            result_2 = result_5
            
            if (edx u>= 0x80 && (edx & 0xe0) != 0xc0)
                result.b = edx
                result.b &= 0xf0
                
                if (result.b != 0xe0 && (edx & 0xf8) != 0xf0)
                    var_148 = "Xutf8_next"
                    var_14c_1 = 0x222
                    var_150 = "C:\x\ax2017\Engine\Xutf8.cpp"
                    ecx = "!Xutf8_is_invalid_lead_char(str)"
                    break
            
            sub_5a0d00(&result_2)
            result_5 = result_2
            char ecx_6 = *result_5
            
            if (ecx_6 u< 0x80)
            label_641f1a:
                result_2 = result_5
                result = sub_642680(sub_5a0d00(&result_2), result_4, arg3, arg6, 1)
                float xmm0_5 = *(result + 0x10)
                int32_t xmm1_2 = *(result + 0x18)
                float xmm2_2 = *(result + 0x30) - 0f
                float xmm4_1 = *(result + 0x3c)
                float xmm3_1 = *(result + 0x34) - 0f
                float var_44 = xmm0_5
                float var_34_1 = xmm0_5
                int32_t xmm0_6 = *(result + 0x1c)
                int32_t var_30_1 = xmm0_6
                int32_t var_28_1 = xmm0_6
                int32_t var_3c_1 = xmm1_2
                int32_t var_2c_1 = xmm1_2
                float xmm2_4 = xmm2_2 * arg4 + 0f
                float xmm3_3 = xmm3_1 * arg4 + 0f
                int32_t xmm7_1 = *(result + 0x14)
                float xmm4_4 = (xmm4_1 - 0f) * arg4 + 0f
                int32_t var_40_1 = xmm7_1
                float xmm1_6 = (*(result + 0x38) - 0f) * arg4 + 0f
                int32_t var_38_1 = xmm7_1
                float var_a4_1 = xmm3_3 + 0f
                float var_a0_1 = xmm1_6 + var_80_1
                float var_9c_1 = xmm4_4 + 0f
                int128_t var_b8 = (xmm2_4 + var_80_1).o
                
                if (xmm1_6 < xmm2_4 || xmm4_4 < xmm3_3)
                    var_148 = "TTFontDrawMatrix"
                    var_14c_1 = 0x2d4
                    ecx = "RectIsNormalized(rectSource)"
                    goto label_64210a
                
                if (*(result + 0x18) f< *(result + 0x10) || *(result + 0x1c) f< xmm7_1)
                    var_148 = "TTFontDrawMatrix"
                    var_14c_1 = 0x2d5
                    ecx = "RectIsNormalized(glyph.uvs)"
                    goto label_64210a
                
                void var_74
                sub_641ad0(&var_74, &var_b8, &var_f8, &var_74)
                sub_646e00(&result_1, &var_44, &var_74, &result_1, 0, *(result_3 + 0x20), 
                    __saved_edx_1)
                float xmm0_19 = *(result + 0x40)
                result = result_3
                ecx_2.b = *result_5
                var_80_1 = (xmm0_19 + 0f f+ *(result + 0x44)) * arg4 + var_80_1
                
                if (ecx_2.b == 0)
                    goto label_6420a3
                
                continue
            
            result.b = ecx_6
            result.b &= 0xe0
            
            if (result.b == 0xc0)
                goto label_641f1a
            
            result.b = ecx_6
            result.b &= 0xf0
            
            if (result.b == 0xe0 || (ecx_6 & 0xf8) == 0xf0)
                goto label_641f1a
        else
            result.b = ecx_2.b
            result.b &= 0xe0
            
            if (result.b == 0xc0)
                goto label_641eb7
            
            result.b = ecx_2.b
            result.b &= 0xf0
            
            if (result.b == 0xe0)
                goto label_641eb7
            
            ecx_2.b &= 0xf8
            
            if (ecx_2.b == 0xf0)
                goto label_641eb7
        
        var_148 = "Xutf8_peek_next"
        var_14c_1 = 0x21c
        var_150 = "C:\x\ax2017\Engine\Xutf8.cpp"
        ecx = "!Xutf8_is_invalid_lead_char(str)"
        break
else
    var_148 = "TTFontGet"
    var_14c_1 = 0x1ef
    ecx = "ttf->assetType == ASSET_TYPE_TRUETYPE"
label_64210a:
    var_150 = "C:\x\ax2017\Engine\TTFont.cpp"

sub_63b870(result, &data_801800, ecx, var_150, var_14c_1, var_148)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
