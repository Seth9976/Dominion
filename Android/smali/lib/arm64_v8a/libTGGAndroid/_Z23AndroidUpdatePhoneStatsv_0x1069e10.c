// 函数: _Z23AndroidUpdatePhoneStatsv
// 地址: 0x1069e10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
char var_a8[0x50]

if (zx.d(*gPhoneStats) == 0)
    *gPhoneStats = 1
    FILE* fp = fopen("/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq", "rb")
    
    if (fp != 0)
        var_a8[0] = 0
        fgets(&var_a8, 0x50, fp)
        fclose(fp)
        fp = atoi(&var_a8)
    
    *(gPhoneStats + 0x10) = fp.d
    FILE* fp_1 = fopen("/sys/class/kgsl/kgsl-3d0/max_gpuclk", "rb")
    
    if (fp_1 == 0)
        *(gPhoneStats + 0x18) = 0
        *(gPhoneStats + 0x18) = 0x220
    else
        var_a8[0] = 0
        fgets(&var_a8, 0x50, fp_1)
        fclose(fp_1)
        int32_t x0_7 = atoi(&var_a8)
        *(gPhoneStats + 0x18) = x0_7
        
        if (x0_7 s< 1)
            *(gPhoneStats + 0x18) = 0x220
        else
            *(gPhoneStats + 1) = 1
    
    goto label_1069f30

float v0 = *(gPhoneStats + 4) - *gSecondsPerUpdate
v0 - 0f
bool cond:1_1 = v0 <= 0f

if (not(v0 > 0f))
    v0 = 0f

*(gPhoneStats + 4) = v0

if (cond:1_1)
label_1069f30:
    FILE* fp_6 = fopen("/sys/devices/system/cpu/cpu0/cpufreq/scaling_cur_freq", "rb")
    FILE* fp_5 = fp_6
    
    if (fp_6 != 0)
        var_a8[0] = 0
        fgets(&var_a8, 0x50, fp_5)
        fclose(fp_5)
        fp_5 = zx.q(atoi(&var_a8))
    
    FILE* fp_2 = fopen("/sys/devices/system/cpu/cpu1/cpufreq/scaling_cur_freq", "rb")
    
    if (fp_2 != 0)
        var_a8[0] = 0
        fgets(&var_a8, 0x50, fp_2)
        fclose(fp_2)
        fp_2 = atoi(&var_a8)
    
    int32_t x8_2 = fp_2.d + fp_5.d
    uint32_t x9_1 = zx.d(*(gPhoneStats + 1))
    int32_t x8_3
    
    if (x8_2 s< 0)
        x8_3 = x8_2 + 1
    else
        x8_3 = x8_2
    
    *(gPhoneStats + 0xc) = x8_3 s>> 1
    FILE* fp_3
    
    if (x9_1 == 0)
        fp_3 = fopen("/sys/devices/14ac0000.mali/clock", "rb")
        
        if (fp_3 != 0)
        label_1069fe8:
            var_a8[0] = 0
            fgets(&var_a8, 0x50, fp_3)
            fclose(fp_3)
            fp_3 = atoi(&var_a8)
    else
        fp_3 = fopen("/sys/class/kgsl/kgsl-3d0/gpuclk", "rb")
        
        if (fp_3 != 0)
            goto label_1069fe8
    
    int32_t x25_1 = 0
    int32_t x19_4 = 0
    int32_t x26_1
    
    if (zx.d(*(gPhoneStats + 1)) == 0)
        x26_1 = 3
    else
        x26_1 = 0xa
    
    *(gPhoneStats + 0x14) = fp_3.d
    
    do
        XFormatString("/sys/devices/virtual/thermal/thermal_zone%d/temp")
        FILE* fp_4 = fopen(XString::operator char const*(), "rb")
        
        if (fp_4 != 0)
            var_a8[0] = 0
            fgets(&var_a8, 0x50, fp_4)
            fclose(fp_4)
            fp_4 = atoi(&var_a8)
        
        x25_1 += fp_4.d
        XString::~XString()
        x19_4 += 1
    while (x26_1 != x19_4)
    
    uint32_t x8_6 = zx.d(*(gPhoneStats + 1))
    float v0_1 = float.s(x25_1) / float.s(x26_1)
    *(gPhoneStats + 8) = v0_1
    
    if (x8_6 == 0)
        *(gPhoneStats + 8) = v0_1 * float.s(0x3a83126f)
    
    *(gPhoneStats + 4) = 0x40a00000

if (*(x23 + 0x28) == x8)
    return 

__stack_chk_fail()
noreturn
