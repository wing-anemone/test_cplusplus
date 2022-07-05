// 兼容了此处原有的类型定义和*ID的命名风格
// X(name, r_type)
#define UNIQ_TYPE_TABLE       \
  X(ArticleID, uint32_t)      \
  X(AvID, uint64_t)           \
  X(BUVID, std::string)       \
  X(EpID, uint64_t)           \
  X(GameID, uint64_t)         \
  X(LiveRegionID, uint32_t)   \
  X(LiveID, uint32_t)         \
  X(MID, uint64_t)            \
  X(RegionID, uint32_t)       \
  X(SeasonID, uint64_t)       \
  X(SpecialID, uint64_t)      \
  X(TagID, uint32_t)          \
  X(UserGroupID, uint32_t)    \
  X(UserLevel, uint32_t)


// 统一定义UNIQ_TYPE
#define X(name, r_type) \
UNIQ_TYPE(name, r_type);                   \
template <>                                \
struct UniqTypeReflection<name::kSign> {   \
  using RealType = name::RealType;         \
};
UNIQ_TYPE_TABLE
#undef X

// VarId 默认值为nullptr 因为boost::none_t无默认构造
#define X(name, r_type) ,name
using VarId = boost::variant<std::nullptr_t UNIQ_TYPE_TABLE>;
#undef X

// 跨服务的类型标记
enum IdType {
  kNullID = 0,
#define X(name, r_type) k##name = name::kSign,
UNIQ_TYPE_TABLE
#undef X
};


main (){
  
  return 0;
}

