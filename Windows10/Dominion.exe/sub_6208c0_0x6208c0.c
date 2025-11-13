// 函数: sub_6208c0
// 地址: 0x6208c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* var_1a8 = sub_61dad0()
uint32_t eax_3 = sub_67bd70(arg1, "img_map")
uint32_t ecx_1 = eax_3
int128_t var_1a0
int128_t xmm0_1

if (ecx_1 == 0)
    var_1a0 = data_bf21e8
    xmm0_1 = data_bf21f8
else
    eax_3 = zx.d(ecx_1.w)
    
    if (eax_3 u>= data_c23bac)
        var_1a0 = data_bf21e8
        xmm0_1 = data_bf21f8
    else
        eax_3 = eax_3 * 0x18d0 + data_c23ba8
        
        if (*(eax_3 + 0x18c8) != ecx_1)
            var_1a0 = data_bf21e8
            xmm0_1 = data_bf21f8
        else
            eax_3 = sub_64e7a0(ecx_1)
            var_1a0 = *(eax_3 + 0x1620)
            xmm0_1 = *(eax_3 + 0x1630)

int32_t* ecx_2 = data_171e998
int32_t var_1b8_1
char* ecx_3
char const* const edx

if (ecx_2 != 0)
    if (ecx_2[1] == 0x22)
        void* eax_5 = sub_5af880(ecx_2)
        float xmm2 = var_1a0.d
        int32_t* ecx_4 = arg2 + 0x507c
        int128_t xmm5 = data_800248
        float var_170 = 0f
        int32_t i = 0
        float xmm3_1 = xmm2 * 87f
        int32_t var_16c = 0
        int32_t var_168 = *(eax_5 + 0x10)
        void var_158
        void* eax_6 = &var_158
        int32_t var_164 = *(eax_5 + 0x14)
        var_170.o = var_170.o
        float xmm0_7 = xmm2 * 0f
        
        do
            i += 8
            var_1a0 = xmm5
            var_1a0.d = xmm2
            int128_t var_190
            var_190:0xc.d = xmm0_7 * 1.13867188f f+ xmm0_1:0xc.d - xmm0_7
            var_190:4.d = *ecx_4 * xmm2 * 1.13867188f + xmm0_1:4.d - xmm3_1
            float xmm0_13 = ecx_4[1]
            ecx_4 = &ecx_4[2]
            var_190:8.d = xmm0_13 * xmm2 * 1.13867188f + xmm0_1:8.d - xmm3_1
            *eax_6 = var_1a0
            *(eax_6 + 0x10) = var_190
            eax_6 += 0x20
        while (i s< 0x50)
        
        if (sub_4b9370() != 0)
            int32_t i_1 = 0
            int32_t edi_1 = *sub_4b9480()
            
            do
                if (*(sub_61dad0() + i_1 + 8) == edi_1)
                    break
                
                i_1 += 0xc
            while (i_1 s< 0x78)
        
        int32_t edi_2 = 0
        void* var_1a4 = &var_158
        void* i_2 = &data_1724008
        var_1a8 += 8
        uint32_t result
        
        do
            sub_654ce0(&var_170, i_2, "mission_btn", data_171e7dc, &var_170, &var_170, 0x32c9, 
                nullptr, 1)
            *(sub_64e7a0(*i_2) + 0x18bc) = sub_61eb90
            int32_t var_1b8_2 = edi_2
            sub_61fcf0(sub_666060(*i_2, var_1a4), arg2, *i_2, var_1a8)
            result = sub_65d6e0(*i_2, data_8c4634)
            var_1a4 += 0x20
            i_2 += 4
            var_1a8 += 0xc
            edi_2 += 1
        while (i_2 s< &data_1724030)
        
        CookieCheckFunction(result)
        return result
    
    char const* const var_1b4_1 = "UI2DefGet"
    var_1b8_1 = 0xc17
    edx = &data_801800
    ecx_3 = "ptr->assetType == ASSET_TYPE_UI2"
else
    char const* const var_1b4 = "UI2DefGet"
    var_1b8_1 = 0xc16
    edx = "UI2DefGet on null pointer"
    ecx_3 = &data_874470

sub_63b870(eax_3, edx, ecx_3, "C:\x\ax2017\Engine\UI2.cpp", var_1b8_1, "UI2DefGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
