// 函数: _Z13AppUpdateGameb
// 地址: 0xc75a50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
**gpAppData = XGetMachineTime()
int64_t* x8_1 = *gpAppData
int64_t result
float v0
result, v0 = XMillisecondsFromMachineTimeDiffFloat(x8_1[1], *x8_1)
int64_t* x8_2 = *gpAppData
v0 = v0 * float.s(0x3a83126f) f+ x8_2[2].d
x8_2[1] = *x8_2
x8_2[2].d = v0
uint64_t x9_1 = *gpGameData
uint32_t x8_3 = zx.d(*(x9_1 + 0x40))
int32_t* x9_3

if (x8_3 == 0)
    x9_3 = gSecondsPerUpdateTarget
else
    x9_3 = x9_1 + 0x50

int64_t v8
v8.d = *x9_3
uint64_t x9_4 = *gAppInterface
int64_t v9
v9.d = v0 f/ v8.d
int32_t x8_5
uint32_t x10

if (x9_4 == 0 || zx.d(*(x9_4 + 0x3c)) == 0 || x8_3 != 0)
label_c75b54:
    float temp0_1 = vrndm_f32(v9.d)
    float v1
    
    if (temp0_1 < 0f)
        v1 = fconvert.s(-0.5f)
    else
        v1 = fconvert.s(0.5f)
    
    x8_5 = 0
    uint32_t temp0_2 = vcvts_s32_f32(temp0_1 + v1)
    
    if ((x19 & 1) == 0)
        x10 = temp0_2
    else
        x10 = 1
    
    if (x10 == 0)
        return result
else
    result = VRIsDisconnected()
    
    if ((result.d & 1) != 0)
        goto label_c75b54
    
    result = VRHasFocus()
    
    if ((result.d & 1) == 0)
        goto label_c75b54
    
    if (not(v9.d f>= fconvert.s(0.75f)))
        result = XTrace("update loop called to soon from vsync %f")
    
    if (v9.d f< 0f)
        v0 = fconvert.s(-0.5f)
    else
        v0 = fconvert.s(0.5f)
    
    uint32_t temp0 = vcvts_s32_f32(v9.d f+ v0)
    uint32_t x9_6
    
    x9_6 = temp0 != 0 ? temp0 : 1
    
    x8_5 = 1
    
    if ((x19 & 1) == 0)
        x10 = x9_6
    else
        x10 = 1
    
    if (x10 == 0)
        return result

void* x9_8 = *gpAppData
uint32_t x11_2

if (zx.d(*(x9_8 + 0x1b)) == 0)
    x11_2 = 0x64
else
    x11_2 = 1

uint32_t x20_1

x20_1 = x10 s> x11_2 ? x11_2 : x10

uint64_t x8_7

if ((x8_5 | (x10 s> x11_2 ? 1 : 0)) != 1)
    *(x9_8 + 0x10) = *(x9_8 + 0x10) - v8.d f* float.s(x20_1)
    x8_7 = *gpGameData
    
    if (zx.d(*(x8_7 + 0x3e)) != 0)
    label_c75be4:
        
        if (zx.d(*(x8_7 + 0x3f)) == 0)
            return SoundUpdateAll() __tailcall
        
        x20_1 = 1
        *(x8_7 + 0x3f) = 0
else
    *(x9_8 + 0x10) = 0
    x8_7 = *gpGameData
    
    if (zx.d(*(x8_7 + 0x3e)) != 0)
        goto label_c75be4
PerfEventEnd()
int64_t var_28 = TimerStart()
ProfilerStartFrame()
GameUpdateSimulation(x20_1)
TimerStop(&var_28)

if ((x19 & 1) == 0)
    *(*gpAppData + 0x14) = x20_1
    GameUpdateRender()
    RendererDrawFrame()

ProfilerEndFrame()

if (TimerStop(&var_28) s>= 0x51)
    XTrace("slow frame %dms sim %dms draw %dms")

return PerfEventBegin("Non-Update Loop")
