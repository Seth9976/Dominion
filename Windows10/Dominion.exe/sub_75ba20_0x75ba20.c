// 函数: sub_75ba20
// 地址: 0x75ba20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
__security_cookie
int32_t edi = arg3
void* esi = arg1
void* var_e0 = esi
int32_t var_d8 = edi
void* var_100

if (data_cc8d48 == 0)
    bool cond:1_1 = (*(esi + 0x1068) & 8) != 0
    data_cc8d48 = 1
    
    if (not(cond:1_1))
        var_100 = &data_1000000
        arg1 = _controlfp(&data_1000000, 0x3000000)

if (data_cc8d49 == 0)
    bool cond:3_1 = (*(esi + 0x1068) & 8) != 0
    data_cc8d49 = 1
    
    if (not(cond:3_1))
        int32_t var_d4_2 = arg2 | 0x8040

double xmm0_2[0x2] = _mm_cvtepi32_pd(zx.q(edi)) f+ *((edi u>> 0x1f << 3) + &data_893660)
int32_t eax_7 = *(esi + 0x1054)
float xmm1 = _mm_cvtpd_ps(xmm0_2)
double xmm0_4 = _mm_cvtepi32_pd(zx.q(eax_7))
bool cond:2 = *(esi + 0x10ac) == 0
float xmm1_1[0x2] = xmm1 / _mm_cvtpd_ps(xmm0_4 f+ *((eax_7 u>> 0x1f << 3) + &data_893660))
double xmm1_2 = _mm_cvtps_pd(xmm1_1)
*(esi + 0x10b8) = (zx.o(0)).q
double xmm1_3 = xmm1_2 f+ *(esi + 0x10b0)
float xmm0_7 = *(esi + 0x106c)
*(esi + 0x10b0) = xmm1_3

if (not(cond:2))
    var_100.q = xmm1_3
    long double st0_1
    st0_1, arg1 = sub_7607e0(esi + 0x1080, ebp, esi, var_100)
    *(esi + 0x106c) = fconvert.s(st0_1)

float xmm0_8 = *(esi + 0x106c)

if (*(esi + 4) != 0)
    arg1 = sub_761d70(*(esi + 4))

char outputString[0xc8]

if (*(esi + 8) != 0)
    char const* const var_fc_2 = "!mInsideAudioThreadMutex"
    int32_t var_100_1 = 0x902
    char const* const var_104 = "D:\soloud\src\core\soloud.cpp"
    sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
    OutputDebugStringA(&outputString)
    breakpoint

void* i = nullptr
*(esi + 8) = 1
void* i_5 = nullptr

if (*(esi + 0x1c) s> 0)
    void* edi_1 = esi + 0x50
    
    do
        arg1 = *edi_1
        
        if (arg1 != 0 && (*(arg1 + 0x10) & 4) == 0)
            *(arg1 + 0x158) = 0
            
            if (*(esi + 0x10ac) s> 0)
                *(*edi_1 + 0x158) = 1
            
            void* eax_10 = *edi_1
            *(eax_10 + 0x58) = _mm_cvtps_pd(xmm1_1) f+ *(eax_10 + 0x58)
            void* eax_11 = *edi_1
            double xmm0_11 = _mm_cvtps_pd(xmm1_1)
            *(eax_11 + 0x60) = _mm_cvtps_pd(*(eax_11 + 0x50)) * xmm0_11 f+ *(eax_11 + 0x60)
            void* ecx_1 = *edi_1
            
            if (*(ecx_1 + 0xf4) s> 0)
                var_100.q = *(ecx_1 + 0x58)
                int32_t ecx_3
                long double st0_2
                st0_2, ecx_3 = sub_7607e0(ecx_1 + 0xc8, ebp, esi, var_100)
                int32_t var_fc_4 = ecx_3
                sub_760bd0(esi, i_5, fconvert.s(st0_2))
            
            void* ecx_5 = *edi_1
            
            if (*(ecx_5 + 0xc4) s> 0)
                var_100.q = *(ecx_5 + 0x58)
                *(*edi_1 + 0x38) = fconvert.s(sub_7607e0(ecx_5 + 0x98, ebp, esi, var_100))
                *(*edi_1 + 0x158) = 1
                sub_7610d0(esi, i_5)
                *(esi + 0x1cdc0) = 1
            
            void* ecx_8 = *edi_1
            
            if (*(ecx_8 + 0x94) s> 0)
                var_100.q = *(ecx_8 + 0x58)
                int32_t ecx_10
                long double st0_4
                st0_4, ecx_10 = sub_7607e0(ecx_8 + 0x68, ebp, esi, var_100)
                int32_t var_fc_7 = ecx_10
                sub_7608e0(esi, esi.w, edi_1, i_5, fconvert.s(st0_4))
                *(*edi_1 + 0x158) = 1
            
            void* ecx_12 = *edi_1
            
            if (*(ecx_12 + 0x124) != 0)
                var_100.q = *(ecx_12 + 0x58)
                sub_7607e0(ecx_12 + 0xf8, ebp, esi, var_100)
                void* eax_15 = *edi_1
                
                if (*(eax_15 + 0x124) == 0xffffffff)
                    *(eax_15 + 0x124) = 0
                    sub_760af0(esi, i_5, 1)
            
            arg1 = *edi_1
            
            if (*(arg1 + 0x154) != 0)
                var_100.q = *(arg1 + 0x58)
                int80_t st0_6
                st0_6, arg1 = sub_7607e0(arg1 + 0x128, ebp, esi, var_100)
                void* eax_16 = *edi_1
                
                if (*(eax_16 + 0x154) == 0xffffffff)
                    *(eax_16 + 0x154) = 0
                    arg1 = sub_760f30(esi, i_5)
            
            i = i_5
        
        i += 1
        edi_1 += 4
        i_5 = i
    while (i s< *(esi + 0x1c))
    
    edi = var_d8

if (*(esi + 0x1cdc0) != 0)
    arg1 = sub_75a730(esi)

int32_t eax_17 = *(esi + 0x1054)
int32_t var_fc_10 = *(esi + 0x1050)
int32_t var_100_2 = *(esi + 0x1058)
void* var_104_1 = arg1
float xmm0_23 =
    _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_17)) f+ *((eax_17 u>> 0x1f << 3) + &data_893660))
sub_75b0e0(esi, *(esi + 0x30), edi, arg4, *(esi + 0x20), 0, xmm0_23, var_100_2, var_fc_10)
int32_t i_6 = 8
void* edi_2 = esi + 0x10e0
int32_t i_8 = 8
int32_t i_1

do
    int32_t* ecx_19 = *edi_2
    
    if (ecx_19 != 0)
        int32_t eax_19 = *(esi + 0x1054)
        int32_t edx_1 = *ecx_19
        var_100_2.q = *(esi + 0x10b0)
        int32_t xmm0_28 =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_19)) f+ *((eax_19 u>> 0x1f << 3) + &data_893660))
        (*(edx_1 + 8))(*(esi + 0x30), var_d8, arg4, *(esi + 0x1058), xmm0_28, var_100_2)
        i_6 = i_8
    
    edi_2 += 4
    i_1 = i_6
    i_6 -= 1
    i_8 = i_6
while (i_1 != 1)

if (*(esi + 8) == 0)
    char const* const var_fc_11 = "mInsideAudioThreadMutex"
    int32_t var_100_3 = 0x908
    char const* const var_104_4 = "D:\soloud\src\core\soloud.cpp"
    sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
    OutputDebugStringA(&outputString)
    breakpoint

bool cond:6 = *(esi + 4) == 0
*(esi + 8) = 0

if (not(cond:6))
    sub_761dd0(*(esi + 4))

void* eax_23 = sub_75a8d0(esi, esi + 0x30, esi + 0x20, arg4, xmm0_7, xmm0_8)

if ((*(esi + 0x1068) & 2) != 0)
    void* ecx_21 = esi + 0x1100
    __builtin_memset(esi + 0x1100, 0, 0x20)
    
    if (var_d8 u> 0xff)
        void* edx_2 = esi + 0x1120
        void* eax_24 = 0xffffeee0 - esi
        uint32_t i_7 = 0x100
        uint32_t i_9 = 0x100
        uint32_t i_2
        
        do
            int32_t j = 0
            *edx_2 = 0
            
            if (*(esi + 0x1058) s> 0)
                int128_t* var_d8_1 = eax_24 + edx_2
                
                do
                    uint32_t xmm0_31[0x4] = *(var_d8_1 + *(esi + 0x20))
                    int32_t xmm1_9 = _mm_and_ps(xmm0_31, 0x7fffffff)
                    
                    if (not(xmm1_9 f<= *ecx_21))
                        *ecx_21 = xmm1_9
                    
                    j += 1
                    ecx_21 += 4
                    esi = var_e0
                    var_d8_1 += arg4 << 2
                    *edx_2 = xmm0_31 f+ *edx_2
                while (j s< *(esi + 0x1058))
                
                i_7 = i_9
                ecx_21 = esi + 0x1100
            
            edx_2 += 4
            i_2 = i_7
            i_7 -= 1
            i_9 = i_7
        while (i_2 != 1)
        CookieCheckFunction(i_7)
        return 
    
    int32_t i_3 = 0
    eax_23 = esi + 0x1120
    int32_t i_4 = 0
    void* var_d4_3 = eax_23
    
    do
        int32_t j_1 = 0
        *eax_23 = 0
        
        if (*(esi + 0x1058) s> 0)
            uint32_t edx_5 = modu.dp.d(0:i_3, var_d8) << 2
            
            do
                uint32_t xmm0_33[0x4] = *(edx_5 + *(esi + 0x20))
                int32_t xmm1_11 = _mm_and_ps(xmm0_33, 0x7fffffff)
                
                if (not(xmm1_11 f<= *ecx_21))
                    *ecx_21 = xmm1_11
                
                eax_23 = var_d4_3
                j_1 += 1
                edx_5 += arg4 << 2
                ecx_21 += 4
                *eax_23 = xmm0_33 f+ *eax_23
            while (j_1 s< *(esi + 0x1058))
            
            i_3 = i_4
            ecx_21 = esi + 0x1100
        
        i_3 += 1
        eax_23 += 4
        i_4 = i_3
        var_d4_3 = eax_23
    while (i_3 s< 0x100)

CookieCheckFunction(eax_23)
