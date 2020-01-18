#include "k_website.h"

VALUE rb_mKWebsite;

void
Init_k_website(void)
{
  rb_mKWebsite = rb_define_module("KWebsite");
}
