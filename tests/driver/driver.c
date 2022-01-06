#include <uv.h>
#include <stdlib.h>

int main() {
  uv_loop_t *loop = malloc(sizeof(uv_loop_t));
  if (uv_loop_init(loop) != 0) {
    return -1;
  }
  if (uv_run(loop, UV_RUN_DEFAULT) != 0) {
    return -2;
  }
  if (uv_loop_close(loop) != 0) {
    return -3;
  }
  free(loop);
  return 0;
}
