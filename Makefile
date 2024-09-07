# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/24 12:42:23 by ryomori           #+#    #+#              #
#    Updated: 2024/06/24 13:21:52 by ryomori          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# プロジェクト名
NAME = fractol

# ソースファイル
SRCS = main.c fractol.c mk_fractol.c

# オブジェクトファイル
OBJS = $(SRCS:.c=.o)

# コンパイラとフラグ
CC	= cc
CFLAGS = -Wall -Wextra -Werror -g -I./libft -I./minilibx-linux

# ライブラリ設定
MINILIBX_DIR = ./minilibx-linux
MINILIBX = $(MINILIBX_DIR)/libmlx.a
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

# リンク時に必要なライブラリ（X11関連）
LDFLAGS = -L$(MINILIBX_DIR) -lX11 -lXext -lXrender

# クリーンアップ用コマンド
RM = rm -fr

# ビルド対象
all: $(NAME)

# バイナリ生成ルール
$(NAME): $(OBJS) $(LIBFT) $(MINILIBX)
	$(CC) $(OBJS) $(CFLAGS) $(MINILIBX) $(LIBFT) $(LDFLAGS) -o $(NAME)

# .cファイルから.oファイルへの変換ルール
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

# libft.aのビルドルール
$(LIBFT):
	@make -C $(LIBFT_DIR)

# MiniLibXのビルドルール
$(MINILIBX):
	@make -C $(MINILIBX_DIR)

# クリーンアップルール
clean:
	@make -C $(LIBFT_DIR) clean
	@make -C $(MINILIBX_DIR) clean
	$(RM) $(OBJS)

# 完全なクリーンアップ
fclean: clean
	@make -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

# 再ビルド
re: fclean all
