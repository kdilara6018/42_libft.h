
NAME = libft.a
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	  ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
	  ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
	  ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
	  ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
	  ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	  ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c


OBJECT = $(SRC:.c=.o) # object ismindekideğişkene tanımladığım şey şu : 
#src kısmındakilerin her c dosyası için bir o dosyam var mı 
#o dsoyası object file
#CC=cc 
#CFLAGS = -Wall -Wextra -Werror
CC=cc   # compilie kodunu değişkene atadık 
#her cc gördüğünde bu kodu çalıştırsın derlerken yani
CFLAGS= -Wall -Wextra -Werror
 
all:$(NAME)
%.o: %.c #her o dosyam için bir c dosyam var mı çift kontrol
# %nin anlamı : yer tutucu görevi görüyo
	$(CC) $(CFLAGS) -c $< -o $@
# her o dosyasını c dosyası için compile ediyorum	
# cc nin önüne dolar koyuyoruzki değişkeni görsün yani içeriğini  
$(NAME):$(OBJECT) 
#OBJECT DOSYALARI LİBFT.A DOSYASININ İÇİNDE OLUŞTURULUMUS MU
	ar -rcs $(NAME) $(OBJECT)
#libfta oluşturdum arşive attım manden yinede bak

clean:
	rm -f $(OBJECT)
#object dosyalrını siliyoruz

fclean: clean
	rm -f $(NAME)
#sıkıştırılmış paket dosyamı siliyor

re: fclean $(NAME)
#kütüphane dosyamı silip yeniden oluşturuyo

.PHONY: all clean fclean re

