// 函数: _Z15RendererDrawFPSv
// 地址: 0xfa26bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = *gpGameData
int32_t v0 = *(x19 + 0x4c)

if (v0 f<= 0f)
    return 

if ((zx.d(data_2421e68) & 1) == 0 && __cxa_guard_acquire(&data_2421e68, v0) != 0)
    data_2421e60 = AssetPtrFromPath("sys/DebugFont.font", 0x12)
    __cxa_guard_release(&data_2421e68)

XString::XString()
int32_t x0_1 = AppGetNumUpdatesLastFrame()
float v0_1 = *(x19 + 0x4c)
float v1_1

if (v0_1 < 0f)
    v1_1 = fconvert.s(-0.5f)
else
    v1_1 = fconvert.s(0.5f)

vcvts_s32_f32(v0_1 + v1_1)
void var_18

if (x0_1 s> 1)
    *(gPhoneStats + 8)
    XFormatString("%d  %0.1f stall %d")
    XString::operator=(&var_18)
else
    *(gPhoneStats + 8)
    XFormatString("%d  %0.1f")
    XString::operator=(&var_18)
XString::~XString()
DrawString(XString::operator char const*(), data_2421e60, zx.q(*gRgbaIWhite), 1, fconvert.s(3f), 0f)
XString::~XString()
