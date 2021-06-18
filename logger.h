#ifndef __LOGGER_H__

#define __LOGGER_H__


struct log;
struct input_event;

struct log *logger_open(const char *logname, const char *devid);

void logger_close(struct log *log);

int logger_get_event(struct input_event *ev, struct log *log);

int logger_save(const char *str, struct log *log);

extern char keys_association_to_hands[106];

#endif /* __LOGGER_H__ */
