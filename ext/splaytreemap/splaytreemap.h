typedef struct {
  VALUE key,
  VALUE value,
  short int height,
  void *parent,
  void *left,
  void *right
} RSplayTreeMapNode;

typedef struct {
  short int height,
  int size,
  int max_size,
  RSplayTreeMapNode root
} RSplayTreeMap;

VALUE rb_SplayTreeMapClass;

#define GetNode(obj)          (Check_Type(obj, T_DATA), (RSplayTreeMapNode*)DATA_PTR(obj))

