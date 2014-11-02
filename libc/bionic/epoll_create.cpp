#include <sys/epoll.h>

int epoll_create(int /*obsolete_size*/) {
  return epoll_create1(0);
}
