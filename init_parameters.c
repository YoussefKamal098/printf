#include "main.h"

/**
 * init_parameters - init_parameters
 * @parameters: parameters
 * Return: return
 */
void init_parameters(parameters_t *parameters)
{
	parameters->unsign = 0;

	parameters->plus_flag = 0;
	parameters->space_flag = 0;
	parameters->hashtag_flag = 0;
	parameters->zero_flag = 0;
	parameters->minus_flag = 0;

	parameters->width = 0;

	parameters->h_modifier = 0;
	parameters->l_modifier = 0;
}
