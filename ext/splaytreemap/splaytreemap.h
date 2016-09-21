typedef struct {
  VALUE key,
  VALUE value,
  short int depth,
  void *parent,
  void *left,
  void *right
} RSplayTreeMapNode;

VALUE rb_SplayTreeMapClass;

#define GetNode(obj)          (Check_Type(obj, T_DATA), (RSplayTreeMapNode*)DATA_PTR(obj))

