// 函数: sub_c48afc
// 地址: 0xc48afc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_50
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_50)
uint64_t x8 = zx.q(var_50)
int32_t temp0 = x8.d & 1
void* var_40
void* x0_1

if (temp0 == 0)
    x0_1 = &var_50 | 1
else
    x0_1 = var_40

uint64_t x1
uint64_t var_48

if (temp0 == 0)
    x1 = x8 u>> 1
else
    x1 = var_48
uint64_t var_28 = 0
uint64_t var_38 = 0
SpookyHash::Hash128(x0_1, x1, &var_28, &var_38)
uint64_t x21 = zx.q(var_28.w)

if ((zx.d(var_50) & 1) != 0)
    operator delete(var_40)

int64_t* i = *(arg1 + (x21 << 3))
uint32_t x22 = zx.d(*arg2)

if (i != 0)
    if ((x22 & 1) != 0)
        int64_t x20_2 = *(arg2 + 0x10)
        
        do
            if (strcmp(*i, x20_2) == 0)
                return i[4]
            
            i = i[1]
        while (i != 0)
    else
        do
            if (strcmp(*i, &arg2[1]) == 0)
                return i[4]
            
            i = i[1]
        while (i != 0)

void* x1_3

if ((x22 & 1) != 0)
    x1_3 = *(arg2 + 0x10)
else
    x1_3 = &arg2[1]

printf("Couldn't find network matrix %s!\n", x1_3)
pthread_kill(pthread_self(), 6)
Eigen::DenseBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float, float>, Eigen::ArrayWrapper<Eigen::Matrix<float, -1, -1, 0, -1, -1> const> const, Eigen::CwiseUnaryOp<Eigen::internal::scalar_tanh_op<float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_log_op<float>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float, float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_exp_op<float>, Eigen::ArrayWrapper<Eigen::Matrix<float, -1, -1, 0, -1, -1> const> const> const, Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>, Eigen::Array<float, -1, -1, 0, -1, -1> const> const> const> const> const> >
    * x0_9
int64_t x1_4
int64_t* x2_1
char* x3_1
int32_t x4
x0_9, x1_4, x2_1, x3_1, x4 = XNoReturn()
return sub_c48bf4(x0_9, x1_4, x2_1, x3_1, x4) __tailcall
