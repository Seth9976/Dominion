// 函数: sub_6ad160
// 地址: 0x6ad160
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebx_2
int32_t __saved_ebx_1 = __saved_ebx_2
int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76fb21
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t esi
int32_t var_44 = esi
int32_t edi
int32_t var_48 = edi
int32_t __saved_ebp
int32_t* var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_50

if (data_1a9a2a0 s> *(*fsbase->ThreadLocalStoragePointer + 8))
    var_50 = &data_1a9a2a0
    sub_75970e(var_50)
    
    if (data_1a9a2a0 == 0xffffffff)
        int32_t var_14_1 = 0
        int32_t eax_5 = sub_69f030("sys/DebugFont.font", 0x12)
        var_50 = &data_1a9a2a0
        data_1a9a2a4 = eax_5
        int32_t var_14_2 = 0xffffffff
        __Init_thread_footer(var_50)

char eax_6 = sub_646520()
int32_t ecx_1 = 0x7d0
char* const result_1 = &data_801800

if (eax_6 == 0)
    ecx_1 = 0x3e8

int32_t var_14_3 = 1
void* esi_1 = data_147b06c
var_50 = divs.dp.d(sx.q(*(esi_1 + 0x68)), ecx_1)
int32_t var_54 = divs.dp.d(sx.q(*(esi_1 + 0x6c)), ecx_1)
int32_t var_58 = divs.dp.d(sx.q(*(esi_1 + 0x74)), zx.d(eax_6) + 1)
int32_t var_5c = divs.dp.d(sx.q(*(esi_1 + 0x70)), zx.d(eax_6) + 1)
int32_t var_60 = divs.dp.d(sx.q(*(esi_1 + 0x64)), zx.d(eax_6) + 1)
char const* const var_64 = "draw calls: %d, vb: %d, vao: %d, verts: %dK, tris: %dK\r"
var_14_3.b = 2
char* ecx_2 = &data_801800
char* var_2c
char* eax_23 = *sub_63df30(&var_2c, "draw calls: %d, vb: %d, vao: %d, verts: %dK, tris: %dK\r")

if (eax_23 != 0)
    ecx_2 = eax_23

var_50 = ecx_2
sub_63d960(&result_1, var_50)
var_14_3.b = 3

if (data_cf65bc != 0)
    char* eax_24 = var_2c
    
    if (eax_24 != 0 && *eax_24 != 0)
        char* eax_25 = sub_63d4e0(&var_2c)
        int32_t temp2_1 = *(eax_25 + 4)
        *(eax_25 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)

var_14_3.b = 1
var_50 = divs.dp.d(sx.q(*(esi_1 + 0x90)), zx.d(eax_6) + 1)
int32_t var_54_1 = divs.dp.d(sx.q(*(esi_1 + 0x8c)), zx.d(eax_6) + 1)
int32_t var_58_1 = divs.dp.d(sx.q(*(esi_1 + 0x88)), zx.d(eax_6) + 1)
char const* const var_5c_1 = "sprite: draws %d, draws calls %d, texture swaps %d\r"
var_14_3.b = 4
char* ecx_6 = &data_801800
char* eax_36 = *sub_63df30(&var_2c, "sprite: draws %d, draws calls %d, texture swaps %d\r")

if (eax_36 != 0)
    ecx_6 = eax_36

var_50 = ecx_6
sub_63d960(&result_1, var_50)
var_14_3.b = 5

if (data_cf65bc != 0)
    char* eax_37 = var_2c
    
    if (eax_37 != 0 && *eax_37 != 0)
        char* eax_38 = sub_63d4e0(&var_2c)
        int32_t temp3_1 = *(eax_38 + 4)
        *(eax_38 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_64c080(eax_38, *(eax_38 + 0xc) + 0x10)

var_14_3.b = 1
var_50 = divs.dp.d(sx.q(*(esi_1 + 0x7c)), zx.d(eax_6) + 1)
int32_t var_54_2 = divs.dp.d(sx.q(*(esi_1 + 0x78)), zx.d(eax_6) + 1)
char const* const var_58_2 = "draw3d: meshes %d (draws calls %d)\r"
var_14_3.b = 6
char* ecx_10 = &data_801800
char* eax_46 = *sub_63df30(&var_2c, "draw3d: meshes %d (draws calls %d)\r")

if (eax_46 != 0)
    ecx_10 = eax_46

var_50 = ecx_10
sub_63d960(&result_1, var_50)
var_14_3.b = 7

if (data_cf65bc != 0)
    char* eax_47 = var_2c
    
    if (eax_47 != 0 && *eax_47 != 0)
        char* eax_48 = sub_63d4e0(&var_2c)
        int32_t temp4_1 = *(eax_48 + 4)
        *(eax_48 + 4) -= 1
        
        if (temp4_1 == 1)
            sub_64c080(eax_48, *(eax_48 + 0xc) + 0x10)

var_14_3.b = 1
var_50 = divs.dp.d(sx.q(*(esi_1 + 0x84)), zx.d(eax_6) + 1)
int32_t var_54_3 = divs.dp.d(sx.q(*(esi_1 + 0x80)), zx.d(eax_6) + 1)
char const* const var_58_3 = "draw3d: quads %d (draws calls %d)\r"
var_14_3.b = 8
char* const esi_2 = &data_801800
char* const var_28
char* eax_56 = *sub_63df30(&var_28, "draw3d: quads %d (draws calls %d)\r")
char* ecx_14 = &data_801800

if (eax_56 != 0)
    ecx_14 = eax_56

var_50 = ecx_14
sub_63d960(&result_1, var_50)
int32_t** esp_1 = &var_4c
var_14_3.b = 9

if (data_cf65bc != 0)
    char* eax_57 = var_28
    
    if (eax_57 != 0 && *eax_57 != 0)
        char* eax_58 = sub_63d4e0(&var_28)
        int32_t temp5_1 = *(eax_58 + 4)
        *(eax_58 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_64c080(eax_58, *(eax_58 + 0xc) + 0x10)
            var_28 = &data_801800

var_14_3.b = 1
char* eax_59 = data_cf65b8

if (eax_59[0x28] != 0)
    int32_t* ecx_18 = data_147b070
    var_50 = nullptr
    (*(*ecx_18 + 0xb0))(var_50)
    float var_30_1 = fconvert.s(arg1)
    int32_t var_54_4 = 1
    (*(*data_147b070 + 0xb0))(1)
    long double x87_r1
    var_2c = fconvert.s(x87_r1)
    var_58_3.q = _mm_cvtps_pd(var_2c)
    char** var_60_1
    var_60_1.q = _mm_cvtps_pd(var_30_1)
    char const* const var_64_1 = "gpu eyes %0.2f ms, vr end %0.2f ms\r"
    var_14_3.b = 0xa
    char* eax_65 = *sub_63df30(&var_2c, "gpu eyes %0.2f ms, vr end %0.2f ms\r")
    
    if (eax_65 != 0)
        esi_2 = eax_65
    
    eax_59 = sub_63d960(&result_1, esi_2)
    esp_1 = &var_50
    var_14_3.b = 0xb
    
    if (data_cf65bc != 0)
        eax_59 = var_2c
        
        if (eax_59 != 0 && *eax_59 != 0)
            eax_59 = sub_63d4e0(&var_2c)
            int32_t temp7_1 = *(eax_59 + 4)
            *(eax_59 + 4) -= 1
            
            if (temp7_1 == 1)
                eax_59 = sub_64c080(eax_59, *(eax_59 + 0xc) + 0x10)
                var_2c = &data_801800
    
    var_14_3.b = 1

int128_t var_40 = data_893700
*(esp_1 - 4) = 0
*(esp_1 - 8) = 0
*(esp_1 - 0xc) = 0x3f800000
*(esp_1 - 0x10) = 1
*(esp_1 - 0x14) = 0
*(esp_1 - 0x18) = 0xffffffff
*(esp_1 - 0x1c) = data_1a9a2a4
char* result = sub_6b74d0(eax_59, &var_40)
int32_t var_14_4 = 0xc

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp6_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp6_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
*esp_1
esp_1[1]
esp_1[2]
return result
