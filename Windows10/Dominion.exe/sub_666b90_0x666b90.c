// 函数: sub_666b90
// 地址: 0x666b90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
int32_t xmm0
int32_t var_3c = xmm0
float xmm0_1 = data_8c4634
int128_t var_28
int32_t* eax_3
int32_t edx
int32_t edx_1
eax_3, edx_1 = sub_666a40(&var_28, edx, data_cadde4, &var_28)
int32_t ecx_1 = data_cadde4
var_28 = *eax_3
int32_t var_70
char const* const var_6c_2
char* ecx_2

if (ecx_1 u> 3)
    var_6c_2 = "RectEditorSafe"
    var_70 = 0x3850
    ecx_2 = "Halt"
else
    int128_t var_50
    int128_t xmm0_3
    
    switch (ecx_1)
        case 0, 1, 2
            xmm0_3 = *sub_666a40(&var_50, edx_1, ecx_1, &var_50)
        case 3
            xmm0_3 = data_893720
    
    int32_t* var_80_1 = data_c27c20
    var_50 = xmm0_3
    eax_3 =
        sub_654ce0(&var_28, &data_c27c24, "editor asset", var_80_1, &var_28, &var_50, 0, nullptr, 0)
    data_ca9a77 = eax_3.b
    
    if (eax_3.b != 0)
        eax_3 = sub_63b5f0("reloaded ui asset")
    
    float xmm2_1 = data_c27c48
    float xmm3_2 = data_c27c4c ^ (data_8937c0.o).d
    float xmm1_2 = data_c27c50 ^ (data_8937c0.o).d
    int128_t var_38 = data_bf21e8
    float xmm3_3 = xmm3_2 * xmm2_1
    var_28 = data_bf21f8
    var_28:0xc.d = 0
    var_38.d = xmm2_1
    var_28:4.d = xmm3_3
    var_28:8.d = xmm1_2 * xmm2_1
    
    if (xmm3_3 >= -1000000f)
        if (1000000f >= xmm3_3)
            uint32_t eax_7 = sub_64e7a0(data_c27c24)
            int128_t var_60
            sub_4eb600(&var_38, eax_7 + 0x1620, &var_60, &var_38)
            *(eax_7 + 0x1620) = var_60
            *(eax_7 + 0x1630) = var_50
            sub_65bf00(eax_7)
            uint32_t eax_9 = sub_64e7a0(data_c27c24)
            sub_665db0(eax_9, &data_c21418, eax_9, 0x3f800000, 0xffffffff, 0)
            sub_666850()
            uint32_t result = sub_65d6e0(data_c27c24, xmm0_1)
            CookieCheckFunction(result)
            return result
        
        var_6c_2 = "UI2ApplyTransform"
        var_70 = 0x370a
        ecx_2 = "t.t.x <= 1000000.0f"
    else
        var_6c_2 = "UI2ApplyTransform"
        var_70 = 0x3709
        ecx_2 = "t.t.x >= -1000000.0f"

sub_63b870(eax_3, &data_801800, ecx_2, "C:\x\ax2017\Engine\UI2.cpp", var_70, var_6c_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
