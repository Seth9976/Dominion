// 函数: _ZN15OpenGLInterface28RenderTargetSetMonitorTargetE11MonitorType
// 地址: 0xf905c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x4274) = 0
uint64_t x8 = *gAppInterface
int64_t* x19 = arg1
int64_t x0
int64_t x1
x0, x1 = RectISet(0, 0, *(x8 + 0x28), *(x8 + 0x2c))
(*(*x19 + 0xb8))(x19, x0, x1, x1)
int64_t result = glBindFramebuffer(0x8d40, zx.q(*(arg1 + 0x5044)))
x19[3] = x19[1]
return result
